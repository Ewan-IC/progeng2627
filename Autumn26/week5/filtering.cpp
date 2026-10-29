#include<iostream>
#include<vector>

int main(){
    int n,t,inp;
    std::vector<int> v;

    std::cin >> n;
    for (int i=0 ; i<n ; i++){
        std::cin >> inp;
        v.push_back(inp);
    }

    std::cin >> t;
    for (int i = 0 ; i < n ; i++){
        if(v[i]<t){
            std::cout<<v[i]<<std::endl;
        }
    }
}