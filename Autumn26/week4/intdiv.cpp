#include <iostream>

void division(int a, int b, int& q, int& r){
    q = a/b;
    r = a%b;
}

int main(){
    int n1 = 12, n2 = 5, quotient = 0, remainder = 0;
    division(n1,n2,quotient,remainder);
    std::cout << "Quotient: " << quotient << " Remainder: " << remainder << std::endl;
}