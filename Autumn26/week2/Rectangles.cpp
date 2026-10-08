#include <iostream>
int main(){
    double l1, l2;
    std::cout << "Enter the first length: " << std::endl;
    std::cin >> l1;

    std::cout << "Enter the second length: " << std::endl;
    std::cin >> l2;

    std::cout << "Perimeter: " << 2*l1 + 2*l2 << std::endl;
    std::cout << "Area: " << l1*l2 << std::endl;
}