#include<iostream>
#include<vector>

int search_vector(double n, const std::vector<double>& vin){
    for (int i = 0; i < vin.size() ; i++){
        if ( vin[i] == n){
            return i;
        }
    }
    return -1;
}

int main(){
    std::vector<double> vin;
    double n = -1.5;
    vin = {2,-1.1,7,-1.5,-3};
    std::cout<< search_vector(n,vin) << std::endl;
}