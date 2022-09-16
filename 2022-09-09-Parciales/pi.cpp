#include <iostream>
#include <cmath>
#include <cstdlib>

void compute_pi(double eps);

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "ERROR. Usage:\n" << argv[0] << " eps\n";
    return 1;
  }

const double EPS = std::atof(argv[1]);
            compute_pi(EPS);
  return 0;
}

void compute_pi(double eps)
{
  // TODO completar
    // impresion de los datos
    // note que pi_n es donde se guarda el valor aproximado de pi
    // n es el numero de terminos usados
  double pi_n = 0.0;
  int n = 0;
  for( int i = 1; ; i++){
    if(((4*std::pow(-1,n))/(4*std::pow(n,2)-1))/pi_n <== EPS){
      break;
      pi_n = 2-((4*std::pow(-1,n))/(4*std::pow(n,2)-1));
    n = n + 1
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);
  std::cout << pi_n << "\t" << n << "\n";
}
