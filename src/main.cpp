// Copyright 2020 Kasyanov

#include <iostream>
#include "MyString.h"

int main() {
  MyString a("abba");
  MyString c = a;
  MyString b = "baba";
  std::cout << c << '\n';
  std::cout << (a > b) << '\n';
  std::cout << (a < b) << '\n';
  std::cout << (a == b) << '\n';
  std::cout << (a <= c) << '\n';
  std::cout << (a >= c) << '\n';
  std::cout << (a == c) << '\n';
  a = "Hello ";
  c = !a + !b;
  std::cout << c << '\n';
  b = "lo";
  c = a - b;
  std::cout << c << '\n';
  c = a * 5;
  std::cout << c << '\n';
  std::cout << b("o") << " " << b("loo") << '\n';
  std::cout << a[2] << '\n';
}
