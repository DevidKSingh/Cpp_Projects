#include <iostream>
#include <ctime>
int main(){
    srand(time(0));
    
    
    int option, x;

    std::cout << "Welcome To number Guesser\nSelect Range (1-x), x = ";
    std::cin >> x;
    std::cout << "Choose:\n1. Play\n2. Exit\nYour Option: ";
    std::cin >> option;
    while (option == 1){
        int n = rand() % x + 1;
        int tries = 0;
        int guess;

        for(int i = 1; i<=5 ;i++){
            std::cout << "Enter Your Guess (You get 5 tries): " << std::endl;
            std::cin >> guess;
            if(guess > x || guess < 1){
                std::cout << "The range is (1-" << x << ")\n";
                continue;
            }
            tries++;
            std::cout << "Tries = " << tries << std::endl;
            if(guess == n){
                std::cout << "Correct Guess" << std::endl;
                break;
            }
            else if (guess > n){
                std::cout << "Try Small Number" << std::endl;
            }
            else if (guess < n){
                std::cout << "Try Larger Nmber" << std::endl;
            }
            
        }
        std::cout << "The number was: " << n << std::endl;
        std::cout << "It took you " << tries << " tries" << std::endl;


        std::cout << "\nChoose:\n1. Play Again\n2. Exit\nYour Option: ";
        std::cin >> option;
    }

    std::cout << "Thanks For Playing";
    return 0;
}