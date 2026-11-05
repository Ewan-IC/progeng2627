#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile, infile2;
    std::vector<std::string> txt = {}, words = {};
    std::vector<int> count = {0, 0, 0};
    infile.open("text.txt");
    infile2.open("words.txt");

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    if(!infile2.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string tmp;
    while(infile >> tmp){
        txt.push_back(tmp);
    }
    while (infile2 >> tmp){
        words.push_back(tmp);
    }
    for (int i = 0; i < words.size() ; i++){
        for ( int j = 0 ; j < txt.size() ; j++){
            if ( words[i] == txt[j]){
                count[i] += 1;
            }
        }
    }
    for (int i = 0; i < words.size() ; i++){
        std::cout << words[i] << ": " << count [i] << std::endl;
    }
    infile.close();
    infile2.close();
}