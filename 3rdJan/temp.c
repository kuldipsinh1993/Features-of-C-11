#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char * capitalize(char *ip);
void subParser(char *ip)
{
	printf("Input: %s\n",ip);
	bool flag = false;
	int i=0;
	char output[200];
	int outputIndex = 0;
	while(ip[i])
	{
		char word[20];
		int wordi = 0;
		while(ip[i]!=' ')
		{
			word[wordi] = ip[i];
			wordi++;
	
			if(i== strlen(ip))
				break;
			else
				i++;
		}
		word[wordi] = '\0';

		// Now we detected the word
		// So we will check and if match than flag will be true
		
	
		FILE *fp = fopen("sub.txt", "r");
		char cmpword[20];
		
		// Read line by line file and get subject to match if matched then
		// check correct grammer.
		while( fgets(cmpword, sizeof(cmpword), fp) != NULL)
		{
			cmpword[strlen(cmpword)-1] = '\0';
		
			if(!strcmp(cmpword,word))
			{
				
				// copy string to new string
				int oldi;
				if(flag)
				{
					oldi = i;
					i -= strlen(word);
					
					int tempi=0;
					for(tempi=0; tempi<i; tempi++)
					{
						output[tempi] = ip[tempi];
					}

					output[tempi-1] = '.';
					
					for(tempi; i<strlen(ip); tempi++,i++)
					{
						output[tempi] = ip[i];
					}
					output[tempi] = '\0';
					ip = output;
				
				i = oldi;
				}
				flag = true;
			}
		}
		fclose(fp);
		if(i >= strlen(ip))
			break;
		else
			i++;
	}

	printf("Output: %s\n",capitalize(ip));
	//return ip;
}

char * capitalize(char *ip)
{
	int i=0;
	
	if(islower(*ip))
	{
		*ip = toupper(*ip);
	}
	i++;
	
	while(*(ip+i)!='\0')
	{
		while(*(ip+i) == '.')
		{
			i++;
			if(islower(*(ip+i)))
			{
				*(ip+i) = toupper(*(ip+i));
			}
		}
		i++;
		
	}
	//printf("In Function : %s\n",ip);
	
	//return 'a';
	return ip;
}

char * a(char *b)
{
	return b;
}
int main()
{

	char *input = "Hello this is good.but not well.he is good but not fine she is good he is angry she is bad";
	
	subParser(input);
	//printf("output: %c %c %c",*out, *(out+1), *(out+1));
	//printf("Output:\n" );
	/*while(*out)
	{
		printf ("%c" , *out);
		out++;
	}*/
	//printf("%s\n", capitalize(out));
	
	return 0;
}
