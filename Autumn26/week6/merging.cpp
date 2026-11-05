#include <iostream>
#include <vector>


void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int ind1=0,ind2=0;
    while (ind1 != v1.size() && ind2 != v2.size()){
        if (v1[ind1] <= v2[ind2]){
            merged.push_back(v1[ind1]);
            ind1 +=1;
        }
        else if (v1[ind1] > v2[ind2]){
            merged.push_back(v2[ind2]);
            ind2 +=1;
        }
        if (ind1 == v1.size() && ind2 != v2.size()){
            while(ind2 != v2.size()){
                merged.push_back(v2[ind2]);
                ind2 += 1;
            }
        }
        if (ind2 == v2.size() && ind1 != v1.size()){
            while(ind1 != v1.size()){
                merged.push_back(v1[ind1]);
                ind1 += 1;
            }
        }
    }
}
int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
    v1 = {1,9,27,36,45};
    v2 = {4,6,10,30,36,92};
    expected_output = {1,4,6,9,10,27,30,36,36,45,92};
    out = {};
    merge_vectors_int(v1, v2, out);
    if(out == expected_output){
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}