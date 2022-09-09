//Juan Navas
//Juan Diego Torres
//Carlos Enciso


#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>

double f(double x);
double g(double x);
double forward_deriv(double x, double h);

int main(void)
{
  std::ofstream fout;
  fout.precision(20); fout.setf(std::ios::scientific);
  fout.open("datos.txt");

  double h, x, dh, d, dexact;

  x = 1.2345;
    dh = 10 ;

  for (h = 1.0e-18; h <= 0.1; h *= dh) {
    d = forward_deriv(x, h);
    dexact = 2*std::cos(2*x);
    fout << h << "\t" << d << "\t\t" << std::fabs(1 - d/dexact) << std::endl;
  }

  fout.close();

  return 0;
}

double f(double x)
{
  return std::sin(2*x);
}

double g(double x)
{
  return 2*std::cos(2*x);
}

double forward_deriv(double x, double h)
{
  return (f(x+h) - f(x))/h;
}
