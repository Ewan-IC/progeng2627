#include <iostream>

int main(){
    int a,b,quotient = 0;
    int aperm;
    std::cin >> a >> b;
    aperm = a;
    while (a>=b){
        a -=b;
        quotient += 1;
    }
    std::cout << aperm << " / " << b << " = " << quotient << " remainder " << a << std::endl;
}