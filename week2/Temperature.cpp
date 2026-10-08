#include <iostream> 
int main(){
    double t;
    std::cout << "Enter the temperature in degrees: " << std::endl;
    std::cin >> t;
    std::cout << "The temperature in Farenheit is: " << t*1.8 +32 << std::endl;
}