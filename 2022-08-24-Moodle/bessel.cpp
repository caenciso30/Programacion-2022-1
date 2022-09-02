#include <iostream> 
#include <cmath> 
#include <cstdlib>
#include <string> 
#include <fstream> 

double bessel(double x, const std::string & filename); 
int main(int argc, char **argv)
{
  std::cout.setf(std::ios::scientific);
  std::cout.precision(15);
  const int xmax = std::atoi(argv[1]);
  const std::string fname = argv[2];
  std::cout << bessel(xmax,fname)<< "\n";
  return 0;
}

double bessel(double x, const std::string & filename)
{
  int xmin = 0;
  int xmax = 10;
  double deltax = 0.05;
  int nsteps = (xmax-xmin)/deltax;
  std::ofstream fout;
  fout.open(filename);
  fout.setf(std::ios::scientific);
  fout.precision(15);
     for(int step = 0; step <= nsteps; step++){
       double x = xmin + step*deltax;
       fout <<x<<"\t"<<std::sph_bessel(0,x) <<"\t"<<std::sph_bessel(1,x)<<"\n";

     }
     fout.close();
     return x;
}

  


    
  

