#include <iostream>

int main(){
    double x, out =0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> x ;
    while (x != 0){
        out += x;
        std::cout << "The current total is: " << std::endl << out << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> x ;
    }
}