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
    getline(cin, name);
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
    cout << "Your current balance is " << balance << endl;
    cout << "How much money would you like to deposit: ";
    cin >> deposit;
    balance += deposit;
    cout << "New Balance: "<< balance <<  endl;
}
 
// Function to display the account
void Bank::display_account()
{
    cout << "Name: " << name << endl
         << "Address: " << address << endl
         << "Balance: " << balance << endl
         << endl;
}
 
// Function to withdraw the account
void Bank::withdraw_money()
{
    float amount;
    cout << "Your current balance is " << balance <<  endl;
    cout << "How much money would you like to withdraw: ";
    cin >> amount;
    while (balance < amount) {
        cout << "Sorry, you don't have sufficient funds for that transaction. How much would you like to withdraw: ";
        cin >> amount;
    }
    balance -= amount;
    cout << "Available balance: "
         << balance;
}
 
// Driver code
int main()
{
    int choice;
 
    // Creating Customer Object of Bank Class
    Bank bank;
    bank.open_account();
    cout << endl;
    bank.deposit_money();
    cout << endl;
    bank.withdraw_money();
    cout << endl;
    bank.display_account();
 
    return 0;
}