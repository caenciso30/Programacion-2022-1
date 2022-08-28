#include <iostream>
#include <cmath>
#include <cstdlib>

bool isprime(int n);
int nth_prime(int n);
int main(int argc, char **argv){
  const int m = std::atoi(argv[1]);
  std::cout << nth_prime(m) << "\n";
  return 0;
}
bool isprime(int n){
  bool isprime = true;
  for(int i = 2; i < n; i++){
      if(n%i == 0){
	return false;
      }
  }
  return true;
}
int nth_prime(int n){
  int i;
  int counter = 0;
    for(i = 2; counter < n; i++){
        if(isprime(i) == true){
            counter = counter + 1;
        }
    }
    return i-1;
}
  
  
	
  



 

    
  
  
