#include <iostream>
#include <vector>

int main(){
    std::vector<int> sequence;
    int tmp = 1;

    std::cout << "please enter a sequence terminated by 0" << std::endl;
    while(tmp != 0){ 
        std::cin >> tmp;
        sequence.push_back(tmp);
    }

    std::cout << "you entered the following sequence" << std::endl;

    for(int i = 0; i < sequence.size(); i++){

        std::cout << sequence[i] << std::endl;
    }

    std::cout << "in reverse order:" << std::endl;

    for(int i = sequence.size() - 1; i >= 0; i--){
        std::cout << sequence[i] << std::endl;
    }

}