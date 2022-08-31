// pi-file-solution.cpp
// suma para calcular el numero pi: std::sqrt(6*result)
// result = sum 1/n^2
#include <iostream> // incluye utilidades para imprimir y leer de pantalla
#include <cmath> // incluye funciones matematicas
#include <cstdlib> // for atoi, atof
#include <string> // for strings
#include <fstream> // to read or write files

// function declaration
double sum_pi(int N, const std::string & filename); // what is the meaning of &?

int main(int argc, char **argv)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);

  const int nmax = std::atoi(argv[1]);
  const std::string fname = argv[2];

  std::cout << "The value of pi is: " << sum_pi(nmax, fname) << "\n";
  return 0;
}

// function implementation
double sum_pi(int N, const std::string & filename)
{
  double result = 0.0; // must be double to store floating point values
  int n = 0;
  double pival = 0.0;

  std::ofstream fout;
  fout.open(filename);
  fout.setf(std::ios::scientific);
  fout.precision(15);
  for(n = 1; n <= N ; n = n+1) {
    result = result + 1.0/(n*n);
    pival = std::sqrt(6*result);
    fout << n << "\t" << pival << "\t" << std::fabs(1 - pival/M_PI) << "\n";
  }
  fout.close();
  return std::sqrt(6*result);
}
