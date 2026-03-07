#include "arcsin.hpp"

#include <cmath>
#include <exception>
#include <string>

double arcsin_power(double x, unsigned int n) {
  if (x > 1 || x < -1) {
    throw std::string("|x| > 1");
  }
  double term = x;
  double sum = term;
  double x2 = x * x;

  for (unsigned int i = 1; i < n; ++i) {
    term *= (2.0 * i - 1.0) * (2.0 * i - 1.0) * (2.0 * i) * x2 /
            (4.0 * i * i * (2.0 * i + 1.0));
    sum += term;
  }
  return sum;
}
