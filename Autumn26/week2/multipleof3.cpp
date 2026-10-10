#include <iostream>

int main(){
    int n;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    if (n%3==0){
        std::cout << "The number is a multiple of 3 " << std::endl;
    
    }
    else{
    std::cout << "The number is not a multiple of 3 " << std::endl;
    }
}