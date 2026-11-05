#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    bool notin = true;
    for( int i = 0; i < vin1.size() ; i ++){
        vout.push_back(vin1[i]);
    }
    for( int i = 0; i < vin2.size() ; i ++){
        notin = true;
        for(int j = 0; j < vin1.size() ; j ++){
            if (vin2[i] == vin1[j]){
                notin = false;
            }
        }
        if (notin){
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    bool in = false;
    for (int i=0 ; i < vin1.size(); i++){
        in = false;
        for (int j=0 ; j < vin2.size(); j++){
            if ( vin1[i] == vin2[j]){
                in = true;
            }
        }
        if(in){
            vout.push_back(vin1[i]);
        }
    }
}

int main(){
    std::ifstream infile, infile2;
    std::ofstream outfile, outfile2;
    infile.open("warehouse1.txt") ; infile2.open("warehouse2.txt");
    outfile.open("union.txt") ; outfile2.open("intersection.txt");

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!outfile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!outfile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::vector<std::string> ware1 = {}, ware2 = {}, uni = {}, inter = {};
    std::string tmp;

    while(infile >> tmp){
        ware1.push_back(tmp); 
    }
    while(infile2 >> tmp){
        ware2.push_back(tmp); 
    }
    union_vector(ware1, ware2, uni);
    intersection_vector(ware1, ware2, inter);
    for(int i = 0 ; i < uni.size(); i++){
        outfile << uni[i] << std::endl;
    }
    for(int i = 0 ; i < inter.size(); i++){
        outfile2 << inter[i] << std::endl;
    }
    infile.close();
    infile2.close();
    outfile.close();
    outfile2.close();
}