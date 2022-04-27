#include <iostream>
using namespace std;

//Creating an ATM App With 4 main functionality (Menu, Check Balance, Withdraw, Deposit, Exit)

void displayMenu(){
    cout << "       ~Menu~        " << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "3. Deposit Money" << endl;
    cout << "4. Exit" << endl;
}
int main()
{
    double balance = 1050 , depositAmount, withdrawAmount;
    int option;

    do{
    displayMenu();

    cout << "select an option:";
    cin >> option;

    switch(option){
    case 1: cout << "Balance is: " <<balance << "$" << endl;
        cout << "  " <<endl;
        cout << "  ~New operation~     " <<endl;break;
    case 2: cout << "withdraw Amount:";
        cin >> withdrawAmount;
        if (withdrawAmount <= balance)
            balance -= withdrawAmount;
        else
            cout << "Not Enough Money" <<endl;
        cout << "  " <<endl;
        cout << "  ~New operation~     " <<endl;
        break;
    case 3: cout << "Deposit Amount:";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "  " <<endl;
        cout << "  ~New operation~     " <<endl;
        break;
    }

    } while (option != 4);
    system("pause > 0");
}

