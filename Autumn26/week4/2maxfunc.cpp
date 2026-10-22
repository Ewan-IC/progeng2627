#include <iostream>
double max2 (double x, double y){
    if (x > y){
        return x;
    }
    else{
        return y;
    }
}
int main () {
    std::cout << (max2(1,2) == 2) << std::endl;
    std::cout << (max2(4,3) == 4) << std::endl;
    std::cout << (max2(3,2) == 3) << std::endl;
    std::cout << (max2(100,245) == 245) << std::endl;
    std::cout << (max2(72,72) == 72) << std::endl;
}