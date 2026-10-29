#include<iostream>
#include<vector>

int min_vector_element(const std::vector<double>& vin){
    double out = vin[0];
    if (vin.size() == 0){
        return -1;
    }
    else{
        for( int i = 1 ; i<vin.size();i++ ) {
            if (vin[i] < out){
                out = vin[i];
            }
        }
        return out;
    }
}

int main(){
    std::vector<double> vin;
     vin = {2,-1.1,7,-1.5,-3};
     std::cout<< min_vector_element(vin) << std::endl;

}