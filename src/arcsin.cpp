#include "arcsin.hpp"

#include <cmath>
#include <exception>
#include <string>

unsigned long factorial(unsigned int n) {
  unsigned long res = 1;
  for (unsigned int i = 1; i <= n; ++i) {
    res *= i;
  }
  return res;
}

double arcsin_power(double x, unsigned int n) {
  if (x > 1 || x < -1) {
    throw std::string("|x| > 1");
  }
  if (n > 70) {
    throw std::string("n > 70, double won't handle this...");
  }
  double res = 0;
  for (unsigned int i = 0; i < n; ++i) {
    res += factorial(2 * i) / (std::pow(2, 2 * i) * std::pow(factorial(i), 2))
      * std::pow(x, 2 * i + 1) / (2 * i + 1);
  }
  return res;
}
