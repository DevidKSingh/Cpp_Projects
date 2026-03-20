#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char comp);
void declareWinner(char you, char comp);

int main(){

    srand(time(0));
    std::cout << "\n\nHello, Welcome to Rock-Paper-Scissors!!!!\n\n";
    while(true){
        
        char you = getUserChoice();
        if(you == 'e'){
            break;
        }
        char comp = getComputerChoice();
        showChoice(comp);
        declareWinner(you,comp);
    }
    std::cout << "Thanks For Playing" << std::endl;
    return 0;
}

char getUserChoice(){
    char choice;
    std::cout << "\nr - Rock\np - Paper\ns - Scissors\ne - Exit Game\nEnter Your choice: ";
    std::cin >> choice;
    if(choice != 'r' && choice != 'p' && choice != 's' && choice != 'e'){
        std::cout << "\nEnter Valid Choice!!\n\n";
        return getUserChoice();
    }
    else{
        return choice;
    }
}

char getComputerChoice(){
    int choice = rand() % 3 + 1;
    if(choice == 1){
        return 'r';
    }
    else if(choice == 2){
        return 'p';
    }
    else {
        return 's';
    }
}

void showChoice(char comp){
    std:: cout << "Computer's Choice: " << comp << std::endl;
}

void declareWinner(char you, char comp){
    if(you == comp){
        std:: cout << "\nIt's a Draw!:|\n\n";
    }
    else if(you == 'r' && comp == 's'){
        std:: cout << "\nYou Win:)\n\n";
    }
    else if(you == 'p' && comp == 'r'){
        std:: cout << "\nYou Win:)\n\n";
    }
    else if(you == 's' && comp == 'p'){
        std:: cout << "\nYou Win:)\n\n";
    }
    else {
        std::cout << "\nYou lose:(\n\n";
    }
}