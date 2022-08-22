#include<iostream>

int main(void){
    int m{6};
    if (m<3){
        std::cout << "Opcion 1\n";
    }
    else if (4 <= m <= 7){
        std::cout << "Opcion 2\n";
    }
    else {
            std::cout << "Opcion 3\n";
        }

    return 0;

}
