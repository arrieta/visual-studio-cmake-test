#include <iostream>

#include <app/api.hpp>

int main() {
  std::cout << "Welcome to app v" << version() << "\n";
  greet();
}
