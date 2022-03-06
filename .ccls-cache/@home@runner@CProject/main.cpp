#include <iostream>
using namespace std;

void displayMenu() {
  cout << "**********MENU**********" << endl;
  cout << "1. Check Balance" << endl;
  cout << "2. Deposit Funds" << endl;
  cout << "3. Withdraw Funds" << endl;
  cout << "4. Exit" << endl;
  cout << "************************" << endl;
}

int main() {
  //Check Balance, deposit funds, withdraw funds, display menu
  int option;
  double balance = 1000;

  do{
  displayMenu();
  cout << "Select Option: ";
  cin >> option;

  switch (option) {
    case 1:cout<<"Balance is: "<<balance<<" $" << endl; break;
    case 2:cout<<"Deposit amount: ";
      double depositAmount;
      cin >> depositAmount;
      balance += depositAmount; 
      break;
    case 3:cout<<"Withdraw Funds: ";
      double withdrawAmount;
      cin >> withdrawAmount;
      if(withdrawAmount<=balance)
        balance -= withdrawAmount;
      else
        cout << "Not enough funds ( ͠° ͟ʖ ͡°)" << endl;
      break;
  }
} while (option!=4);
  
  system("pause>0");
}