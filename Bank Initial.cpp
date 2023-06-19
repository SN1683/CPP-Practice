// C++ program to implement
// Bank Management System
 
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;
 
class Bank {
    string name, address;
    float balance;
 
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();
};
 
// Function to open the account
void Bank::open_account()
{
    cout << "Hello, and welcome to the Bank!" << endl;
    cout << "Please enter your name: ";
    cin >> name;
    cout << endl << "Thank you. And your address: ";
    cin >> address;
    cout << endl << "And how much money are you depositing: ";
    cin >> balance;
    cout << endl << "Thank you! Your account has been created!";
}
 
// Function to deposit the account
void Bank::deposit_money()
{
    int deposit;
    cout << "Your current balance is " << balance;
    cout << "How much money would you like to deposit: ";
    cin >> deposit
    balance += deposit;
    cout << "\n New Balance: "
         << balance;
}
 
// Function to display the account
void Bank::display_account()
{
    cout << "Name: " << name << endl
         << "Address: " << address << endl
         << "Type: " << acc_type << endl
         << "Balance: " << balance << endl
         << endl;
}
 
// Function to withdraw the account
void Bank::withdraw_money()
{
    float amount;
    amount = 3200;
    cout << "Enter how much money "
         << "you want to withdraw: "
         << amount << endl;
    balance -= amount;
    cout << "\n Available balance: "
         << balance;
}
 
// Driver code
int main()
{
    int choice;
 
    // Creating Customer Object of Bank Class
    Bank customer;
 
    cout << "\n1) Open account \n\n";
    // Calling open_account() function
    // through customer object.
    customer.open_account();
    cout << "\n------------------------"
         << "-------------------------\n";
 
    cout << "\n2) Deposit account \n\n";
    // Calling deposit_money() function
    // through customer object.
    customer.deposit_money();
    cout << "\n------------------------"
         << "-------------------------\n";
 
    cout << "\n2) Withdraw money \n\n";
    // Calling withdraw_money() function
    // through customer object.
    customer.withdraw_money();
    cout << "\n------------------------"
         << "-------------------------\n";
 
    cout << "\n4) Display Account \n\n";
    // Calling display_account() function
    // through customer object.
    customer.display_account();
    cout << "\n------------------------"
         << "-------------------------\n";
 
    return 0;
}