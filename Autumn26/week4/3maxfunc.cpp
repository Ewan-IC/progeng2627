#include <iostream>
double max3 (double x, double y, double z){
    if (x >= y && x >= z){
        return x;
    }
    else if(y >= x && y >= z){
        return y;
    }
    else{
        return z;
    }
}
int main () {
    std::cout << (max3(1,2,3) == 3) << std::endl;
    std::cout << (max3(4,3,5) == 5) << std::endl;
    std::cout << (max3(7,3,2) == 7) << std::endl;
    std::cout << (max3(100,245,130) == 245) << std::endl;
    std::cout << (max3(72,72,6) == 72) << std::endl;
    std::cout << (max3(6,72,72) == 72) << std::endl;
}