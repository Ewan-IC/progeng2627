#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n,inp;
    std::cout << "Please enter n: " << std::endl;
    std::cin >> n;
    for (int i=0 ; i<n ; i++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> inp;
        v.push_back(inp);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}