#include <iostream>

int main() {
  system("python ./src/python/bindings_test");
  
  std::cout << "Successful pybind11_bazel build!" << std::endl << "Press Return";
  
  std::cin.get();

  return 0;
}
