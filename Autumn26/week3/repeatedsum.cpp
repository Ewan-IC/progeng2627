#include <iostream>

int main(){
    double x, out =0;
    int n, count =0;
    std::cin >> x >> n;
    while (count<n){
        out += x;
        count += 1;
    }
    std::cout << x << " x " << n << " = " << out << std::endl;
}