#include<iostream>
#include<vector>
int main(){
    std::vector<int> v;

    v.push_back(11);
    v.push_back(13);
    v.push_back(12);

    std::cout << v[0]*(v[1] + v[2]) << std::endl;

}