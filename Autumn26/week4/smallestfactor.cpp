#include <iostream>

int smallest_factor(int n){
    for (int f = 2; f < n; f++){
        if(n % f == 0){
            return f;
        }
    }
    return 0;
}

int main(){
    int num = 41;
    std::cout << smallest_factor(num) << std::endl;
    num = 93;
    std::cout << smallest_factor(num) << std::endl;
    num = 26;
    std::cout << smallest_factor(num) << std::endl;
}