#include <iostream>
#include <functional>

template <typename T>
class CAnyData {
 public:
  CAnyData(T value) : m_value{value} {}
  void Print(void) { std::cout << m_value << std::endl; }
  void PrintAfterAdd(T value) { std::cout << (m_value + value) << std::endl; }

  T m_value;
};

int main() {
  /* A function wrapper to a member variable of a class */
  CAnyData<int> data_a{2016};
  std::function<int(CAnyData<int> &)> func_a = &CAnyData<int>::m_value;
  std::cout << func_a(data_a) << std::endl;

  /* A function wrapper to member function without parameter passing */
  CAnyData<float> data_b{2016.1};
  std::function<void(CAnyData<float> &)> func_b = &CAnyData<float>::Print;
  func_b(data_b);

  /* A function wrapper to member function with passing a parameter */
  std::function<void(CAnyData<float> &, float)> func_c =
      &CAnyData<float>::PrintAfterAdd;
  func_c(data_b, 0.1);

  /* A function wrapper to member function generated by std::bind */
  std::function<void(float)> func_d = std::bind(&CAnyData<float>::PrintAfterAdd,
                                                &data_b, std::placeholders::_1);
  func_d(0.2);
}
