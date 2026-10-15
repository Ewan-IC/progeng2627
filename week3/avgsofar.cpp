#include <iostream>

int main(){
    double x, out =0,total =0;
    int n=1;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> x ;
    while (x != 0){
        total += x;
        out = total/n;
        n += 1;
        std::cout << "The current average is: " << std::endl << out << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> x ;
    }
}