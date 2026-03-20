#include <iostream>
#include<iomanip>

double showBalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;
    do{
        std::cout << "***********************************************************\n";
        std::cout << "***********************************************************\n";
        std::cout << "Enter Your choice: \n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice){
            case 1: showBalance(balance);
                break;
            case 2: balance += deposit();
                    showBalance(balance);
                break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                break;
            case 4: std::cout << "Thanks For Visiting!\n";
                break;
            
            default: std::cout << "Invalid Choice\n";
                break;
        }
    }while(choice != 4);

    return 0;
}
double showBalance(double balance){
    std::cout << "Your Balance is: $" << std::setprecision(2) << std::fixed << balance <<"\n";
    return 0;
};

double deposit(){
    double amount;
    std::cout << "Enter Amount to be deposited: \n";
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That is not a valid amount!!\n";
        return 0;
    }
};

double withdraw(double balance){

    double amount;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "Insufficient Funds:(\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "Invalid Amount!";
        return 0;
    }
    else {
        return amount;
    }
};