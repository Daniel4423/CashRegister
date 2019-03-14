

/* 
 * File:   main.cpp
 * Author: Dan
 *
 * Created on March 14, 2019, 1:39 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    double itemCost;
    double paymentAmount;
    int changeDue;
    double displayChange;
    int updatedChange;
    int dollarsBack;
    int quartersBack;
    int dimesBack;
    int nickelsBack;
    int penniesBack;
    char choice;
    bool goAgain;
   
    do {
    cout << "Enter the item cost: " << endl;
    cin >> itemCost;
    
    cout << "Enter the customer payment amount: " << endl;
    cin >> paymentAmount;
    
    displayChange = paymentAmount - itemCost;
    changeDue = (paymentAmount*100 - itemCost*100);
    cout << "Change due: $" << displayChange << endl;
    
    dollarsBack = changeDue / 100;
    updatedChange = changeDue - (dollarsBack*100);
    cout << "# of Dollars: " << dollarsBack << endl;
    
    quartersBack = updatedChange / 25;
    updatedChange = updatedChange - (quartersBack * 25);
    cout << "# of Quarters: " << quartersBack << endl;
    
    dimesBack = updatedChange / 10;
    updatedChange = updatedChange - (dimesBack * 10);
    cout << "# of dimes back: " << dimesBack << endl;
    
    nickelsBack = updatedChange / 5;
    updatedChange = updatedChange - (nickelsBack * 5);
    cout << "# of nickels back: " << nickelsBack << endl;
    
    penniesBack = updatedChange / 1;
    updatedChange = updatedChange - (penniesBack * 1);
    cout << "# of pennies back: " << penniesBack << endl;
    
    
    cout << "Do you have another transaction? (y/n)" << endl;
    cin >> choice;
    goAgain = (choice == 'y') ? true : false;
    
    } while (goAgain == true);
    
            
           
    
  

    return 0;
}

