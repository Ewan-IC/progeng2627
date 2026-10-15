#include <iostream>
int main(){
    int x,n;
    double total = 1;
    std::cin >> x >> n;
    for (int i = 0; i < n; i++){
        total *= x;
    }
    std::cout << "Total: " << total << std::endl;
}
