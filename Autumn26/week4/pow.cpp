#include <iostream>
#include <cmath>

int main(){
 int x,n,total=0;
 std::cin >> x >> n;
 for (int i=1; i<=n; i++){
    total += std::pow(x,i);
 }
 std::cout << x <<" + .... + " << x << "^" << n << " = " << total << std::endl;
}