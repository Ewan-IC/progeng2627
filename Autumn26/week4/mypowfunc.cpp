#include <iostream>
double mypow(double base, int exp){
    double result = 1; 
    if (exp >=0){
        for(int i = 0; i<exp ; i++){
            result *= base;
    }}
    else{
        for(int i = 0; i>exp ; i--){
            result /= base;
    }}


    return result;

}
double mysop(double x, double n){
    double total = 0;
    for (int k=1; k<=n; k++){
        total += mypow(x,k);
    }
    return total;
}
int main(){
    std::cout << (mysop(1,2) == 2) << std::endl;
    std::cout << (mysop(4,3) == 84) << std::endl;
    std::cout << (mysop(3,5) == 363) << std::endl;
    std::cout << (mysop(10,4) == 11110) << std::endl;
    std::cout << (mysop(72,3) == 378504) << std::endl;
}