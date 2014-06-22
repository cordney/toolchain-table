#include <cstdlib> // EXIT_SUCCESS
#include <iostream> // std::cout

int main() {
  int a[3];
  if (a[4] != 0) {
    return 3;
  }
  std::cout << "hello" << std::endl;
  return EXIT_SUCCESS;
}
