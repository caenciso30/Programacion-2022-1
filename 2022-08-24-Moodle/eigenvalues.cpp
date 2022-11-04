#include <iostream>
#include <cstdlib>
#include <eigen3/Eigen/Dense>
#include <complex>

void solvesystem(double k, double m1, double m2);

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "ERROR.\nUsage:\n" << argv[0] << " K M1 M2\n";
    return 1;
  }
  const double K  = std::atof(argv[1]);
  const double M1 = std::atof(argv[2]);
  const double M2 = std::atof(argv[3]);
  std::cout << K << "\t" << M1 << "\t" << M2 << "\t";
  solvesystem(K, M1, M2);
  return 0;
}

void solvesystem(double k, double m1, double m2)
{
  const double K = 200;
  double M1 = 1;
  const double M2 = 40;
  Eigen::MatrixXd m(2,2);
  m(0,0) = 2*k/m1;
  m(1,0) = -k/m2;
  m(0,1) = -k/m1;
  m(1,1) = 2*k/m2;
  Eigen::EigenSolver<Eigen::MatrixXd> es(m);
  std::cout<<"los valores propios son:"<<es.eigenvalues().real()<<"\n";
}

