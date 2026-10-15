#include <iostream>

int main () {
    int n,c1 =0,c2 =0;
    std::cin >> n;
    while (c1<n){
        while (c2<n){
            std::cout << "*";
            c2 += 1;
        }
        c1 +=1;
        c2 = 0;
        std::cout << std::endl;
    }
}