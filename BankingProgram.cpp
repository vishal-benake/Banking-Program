#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    int choice = 0;
    double balance = 0;

    std::cout << "--------------------------\n";
    std::cout << "Welcome to Banking Program\n";
    std::cout << "--------------------------\n\n";

    do
    {
        std::cout << "*******************\n";
        std::cout << "Enter yout choice :\n";
        std::cout << "*******************\n";
        std::cout << "(1) Show Balance\n(2) Deposit Money\n(3) Withdraw Money\n(4) Exit\n";
        std::cin >> choice;
        switch(choice)
        {
            case 1: 
                    showBalance(balance);
                    break;
            case 2: 
                    balance += deposit();
                    showBalance(balance);
                    break;
            case 3: 
                    balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4:
                    std::cout << "Thanks for visiting or Bank!\n";
                    break;
            default:
            std::cout << "Something Went Wrong!\nInvalid Choice!\n\n";

        }
    } while(choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your Balance is : $" << std::setprecision(2) << std::fixed << balance << "\n\n";
}

double deposit()
{
    double amount = 0;
    std::cout << "Enter amount you have to deposit : $ ";
    std::cin >> amount; 
    if(amount > 0)
    {
     return amount;
    }
    else
    {
        std::cout << "Thats not a valid amount!\n";
        return 0;
    }
}

double withdraw(double balance)
{ 
    double amount = 0;
    std::cout << "Enter amount you have to withdraw : $ ";
    std::cin >> amount;

    if(amount > balance)
    {
        std::cout << "Insufficient balance!\n";
        return 0;
    } 
    return amount;
}