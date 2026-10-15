#include <iostream>
int main(){
    int x;
    double total = 1;
    std::cin >> x;
    for (int i = 2; i < x+1; i++){
        total += i;
    }
    std::cout << x << "! = " << total << std::endl;
}
