#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

double potential(double x);
double dev_central(double x, double h);
double dev_richardson(double x, double h);
double forcex(double x, double h);

int main(int argc, char **argv)
{
  std::ofstream fout;
  fout.precision(15); fout.setf(std::ios::scientific);
  fout.open("force.txt");
   //TODO: open the file stream and set the formatting
    // print data, do not modify the instructions
    if (argc != 2) {
      std::cout << "ERROR. Usega:\n" << argv[0] << " h\n";
      return 1;
    }
const double h = std::atof(argv[1]);
const double xmin = 0.0;
const double xmax = 2.5;
const int N = (xmax-xmin)/h;
for(int ii = 1; ii < N; ++ii) {
double x = xmin + ii*h;
double exact = -2*std::sin(x) -2*x*std::cos(x);
fout << x << "\t"
         << exact << "\t"
         << forcex(x, h) << "\t"
         << std::fabs(1 - forcex(x, h)/exact) << "\t"
         << "\n";
  }
  fout.close();
    //TODO : close any file stream
    return 0;
}

double potential(double x)
{
  return 2*x*std::sin(x);
}

double dev_central(double x, double h)
{
  return (potential(x+h/2) - potential(x-h/2))/h;
}

double dev_richardson(double x, double h)
{
  double f1, f2;
  f1 = dev_central(x, h);
  f2 = dev_central(x, h/2);
  return (4*f2 - f1)/3.0;
}

double forcex(double x, double h)
{
  return -dev_richardson(x,h);
}
