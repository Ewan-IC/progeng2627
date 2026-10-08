#include <iostream>

int main(){
    double h,m;
    std::cout << "Enter your height in metres: " << std::endl;
    std::cin >> h;
    std::cout << "Enter your weight in kg: " << std::endl;
    std::cin >> m;
    std::cout << "Your BMI is: " << m/(h*h)  << std::endl;

}