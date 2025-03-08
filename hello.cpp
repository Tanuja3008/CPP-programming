#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
int pin,choice,amount;
double balance = 10000.00; // Intial balance

// Get PIN from user
cout << "Enter your pin:";
cin >> pin;

// Verify PIN(replace with actual pin verification logic)
if(pin == 1518)
{
while(true)
{
 cout << "\nATM Menu:\n";
cout << "1. Withdraw\n";
cout << "2. Deposit\n";
cout << "3. Check Balance\n";
cout <<"4. Exit\n";
cout <<"Enter your choice:";
cin >> choice;

switch (choice)
{
case 1:
cout << "Enter amount to withdraw:";
cin >> amount;
if(amount > 0 && amount <= balance)
{
balance -= amount;
cout <<"withdrawal succesful.New balance: "<< balance << endl;
}
else
{
cout << "Insufficient balance."<< endl;
}
break;
case 2:
cout << "Enter amount to deposit: ";
cin >> amount;
if(amount > 0)
{
balance += amount;
cout << "Deposit succeful.New balance:" << balance << endl;
}
else
{
cout<<"Invalid amount." << endl;
}
break;
case 3:
cout <<" Your current balance is:" << balance << endl;
break;
case 4:
cout <<"Thank you for using the ATM." << endl;
return 0;
default:
cout << "Invalid choice." << endl;
}
}
}
else
{
cout << "Incorrect PIN." << endl;
}
return 0;
}