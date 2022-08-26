#include <iostream>
using namespace std;

int fibonacci(int i) {
    if (i == 2)
        return 2;
    else if (i == 1)
        return 1;
    else return fibonacci(i - 1) + fibonacci(i - 2);
}
int main(int argc, char *argv[]) {
  int m = std::atol(argv[1]);
    int currentTerm, sum = 0;
    currentTerm = 1;
    int i = 1;

    while(currentTerm <= m) {
        currentTerm = fibonacci(i);
        if (currentTerm <= m) {
         

            if (i % 2 == 1)
                sum += currentTerm;
        }
        i++;        
    } 
    cout << sum;
    return 0;
}
