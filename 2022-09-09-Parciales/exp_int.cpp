#include <iostream>
#include <cmath>
#include <cstdio>

double exp_int(double x, int nterms);

int main(int argc, char **argv) {
  if (argc != 3) {
    std::cout << "ERROR. Usage:\n" << argv[0] << " x n \n";
    return 1;
  }

   const double X = std::atoi(argv[1]);
   const int N = std::atoi(argv[2]);
   std::cout.setf(std::ios::scientific);
   std::cout.precision(15);
   std::cout << exp_int(X, N) << "\n";

  return 0;
}

double exp_int(double x, int nterms)
{
  const double gamma = 0.5772156649015329;
  double result = gamma + std::
  for(int n = 1; n <= N ; n = n+1) {
    result = result + std::log(x) + (-(std::pow(1.0,n)*std::pow(x,(n+1)))/(std::pow((n+1),2)*
    }
