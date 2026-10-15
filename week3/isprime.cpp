// first version, not the most efficient one
#include <iostream>

int main(){
    int n,highestf,cf=2;
    bool found_factor = false,finished = false;


    std::cout << "please enter an integer greater than 1" << std::endl;

    std::cin >> n;
    for(int i = 0; (i*i)<n;i++){
        highestf = i;
    }
    highestf +=1;

    while(!finished){
        if (n % cf == 0){
            found_factor = true;
            finished = true;
        }
        cf += 1;
        if (cf>=highestf){
            finished = true;
        }
    }

    if(found_factor){
        std::cout << "the number is not prime" << std::endl;
    }
    else{
        std::cout << "the number is prime" << std::endl;
    }
}