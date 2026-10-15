#include <iostream>
#include <string>

int main () {
    std::string guess = "";
    int ub = 100, lb = 0,mid = 50;
    std::cout << "Think of a number between 0-100 and i'll guess it " << std::endl;
    while (guess != "correct"){
        std::cout << "Is your number: " << mid << std::endl;
        std::cin >> guess;
        while ((guess != "higher") && (guess != "lower") && (guess != "correct") ){
            std::cout << "Invalid input!" << std::endl;
            std::cin >> guess;
    }
        if (guess == "higher"){
            lb = mid;
            mid = (ub-lb)/2 + lb;
        }
        else if (guess == "lower"){
            ub = mid;
            mid = (ub-lb)/2 + lb ;
        }
        
    }
    std::cout << "Your number was : " << mid << std::endl;
}