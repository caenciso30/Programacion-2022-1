#include <iostream>
#include <cstdlib>

bool isPrime(int n);
int PrimeSum(int n);
int main(int argc, char *argv[]) {
  int m = std::atoi(argv[1]);
  std:: cout << PrimeSum(m) << std::endl;
   return 0;
}

bool isPrime(int n){
   for(int i = 2; i < n; i++){
      if(n%i == 0){
         return false;
      }
   }
   return true;
}
int PrimeSum(int n){
   int sumVal = 0;
   for(float i = 2; i <= n; i++){
      if(isPrime(i))
         sumVal += i;
   }
   return sumVal;
}
