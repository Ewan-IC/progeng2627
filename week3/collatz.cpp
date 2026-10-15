#include <iostream>


int main () {
    int n,steps=0,max;
    std::cin >> n;
    max = n;
    while (n!=1){
        steps +=1 ;
        if (n%2 ==0){
            n = n/2;
        }
        else{
            n = 3*n +1;
        }
        if (n>max){
            max = n;
        }
        std::cout << n << "\t";
    }
    std::cout << std::endl;
    std::cout << "Steps taken: " << steps << std::endl;
    std::cout << "Maximum: " << max << std::endl;
}