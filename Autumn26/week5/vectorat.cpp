#include <iostream>
#include <vector>

int main(){
    std::vector<int> v; 

    v.push_back(10);
    v.push_back(20);

    std::cout << v.at(0) << std::endl;
    std::cout << v.at(1) << std::endl;
    v.at(1) = 15;

    std::cout << v.at(1) << std::endl;

    v.at(2) = 2;

    std::cout << v.at(2) << std::endl;

}