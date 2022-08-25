#include <iostream>
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) {
  int m = std::atol(argv[1]);
  for(long long i = 2; i < m; i++){
    if(m%i == 0){
      long long int largedivisor = m/i;
      bool isprime = true;
      for(long long int j = 2; j < largedivisor; j++){
	if(largedivisor%j == 0){
	  isprime = false;
	break;
      }
    }

    if(isprime){
      std::cout << largedivisor << std::endl;
      break;
    }
    }
  }
  return 0;
}
