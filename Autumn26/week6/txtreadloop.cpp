#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream infile; 
    std::string inp;
    std::cin >> inp ;
    infile.open(inp);

    if(infile.is_open()){ 
        int tmp;

        while(infile >> tmp){
            std::cout << tmp << std::endl;
        }

        infile.close(); 

    }
    else{
        std::cout << "error opening file" << std::endl;
    }
}