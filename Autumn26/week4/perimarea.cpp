#include <iostream>

void compute(double length, double width, double& perim, double& area){
    perim = width*2 + length*2;
    area = width * length;
}
int main(){
    double l = 7,w = 8, perimeter = 0, area = 0;
    compute(l,w,perimeter,area);
    std::cout << "Perimeter: "<< perimeter << " Area: " << area << std::endl;
}