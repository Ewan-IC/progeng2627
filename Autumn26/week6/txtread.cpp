#include <iostream>
#include <fstream>
// header fstream needed for working with text files

int main(){
    std::ifstream infile; 

    infile.open("input.txt");


    if(infile.is_open()){ 

        int tmp;

        infile >> tmp;
        std::cout << tmp << std::endl; 


        infile >> tmp;
        std::cout << tmp << std::endl;

        infile.close(); 
    }
    else{
        std::cout << "error opening file" << std::endl;
    }

}