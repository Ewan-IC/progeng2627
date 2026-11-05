#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
int main(){
    std::string inputfilename;

    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;

    while(infile >> tmp){
        v.push_back(tmp); 

    }

    // Open and initialise Output File
    std::string outputfilename;
    std::cout << "enter name of output file" << std::endl;

    std::cin >> outputfilename;

    std::ofstream outfile; 
    outfile.open(outputfilename);


    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    //output onto file
    for (int i = 0; i < v.size(); i++){
        outfile << v[v.size()-1-i] << std::endl;
    }

    // Close files    
    infile.close(); 
    outfile.close();

}