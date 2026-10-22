#include <iostream>
#include <string>

void myswap(std::string& n1, std::string& n2){

    std::string tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;

}

int main(){
    std::string n1 = "a", n2 = "b";
    myswap(n1, n2);

    // when the function is called here
    // the n1 in myswap becomes just a different name
    // for the n1 in the main
    // (same for n2)
    std::cout << (n2 == "a") << std::endl;
}