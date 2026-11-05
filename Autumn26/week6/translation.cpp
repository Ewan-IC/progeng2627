#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>
void seperate(std::vector<std::string> v1, std::vector<std::string>& words, std::vector<std::string>& trans){
    for (int i = 0; i < v1.size(); i++){
        if(i%2==0){
            words.push_back(v1[i]);
        }
        else{
            trans.push_back(v1[i]);
        }
    }
}

int main(){
    std::ifstream infile, infile2 ; 
    std::vector<std::string> advert, init, words, translations;
    infile.open("advert.txt");
    infile2.open("translation.txt");

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
        advert.push_back(tmp);
    }
    while(infile2 >> tmp){
        init.push_back(tmp);
    }
    seperate(init,words,translations);
    for (int i = 0 ; i < advert.size(); i++){
        for (int j = 0 ; j < words.size(); j++){
            if (advert[i] == words[j]){
                advert[i] = translations[j];
            }
        }
    }
    for (int i = 0 ; i < advert.size(); i++){
        std::cout << advert[i] << std::endl;
    }

}