#include<iostream>
#include<vector>

int main(){
    int n,s,inp, total = 0;
    std::vector<int> v;
    std::vector<int> indices;
    std::cout << "Please enter n: " << std::endl;
    std::cin >> n;
    for (int i=0 ; i<n ; i++){
        std::cout << "Please enter a number: " << std::endl;
        std::cin >> inp;
        v.push_back(inp);
    }
    std::cout << "Please enter s: " << std::endl;
    std::cin >> s;
    for (int i = 0 ; i < n ; i++){
        if(v[i] == s){
            total +=1;
            indices.push_back(i);
        }
    }
    if (total > 0 ){
    std::cout<< "There are " << total << " occurances of " << s << " at indices: "<<std::endl;
    for (int i = 0 ; i < size(indices) ; i++){
        std::cout << indices[i] << std::endl;
    }}
    else{
        std::cout << "There are no occurances of " << s << std::endl;
    }
}