#include <iostream>

double mypow(double base, int exp){
    double result = 1; 
    // we declare a variable for the result
    // (should it be initialised? to what value?)
    if (exp >=0){
    for(int i = 0; i<exp ; i++){
        result *= base;
    }}
    else{
        for(int i = 0; i>exp ; i--){
        result /= base;
    }}
    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    return result;

}

int main(){
  
    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "2^-3: " << mypow(2, -3) << std::endl;
    std::cout << "0.5^-2: " << mypow(0.5, -2) << std::endl;
    std::cout << "2^-1: " << mypow(2, -1) << std::endl;
}