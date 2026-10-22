#include <iostream>

bool smallest_factor(int n){
    for (int f = 2; f < n; f++){
        if(n % f == 0){
            return false ;
        }
    }
    return true;
}

int main(){
    int n1, n2;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> n1 >> n2;
    for (int i = n1; i <= n2 ; i++){
        if (smallest_factor(i)){
            std::cout << i << std::endl;
        }
    }
}