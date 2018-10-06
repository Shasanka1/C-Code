//
//  main.cpp
//  Savings Account Balance
//
//  Created by Shasanka nudurupati on 9/29/18.
//  Copyright © 2018 Shasanka nudurupati. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // Introduction of Program
    
    cout << "\t\t The Savings Account Balance" << endl;
    cout << "___________________________________\n\n";
    
    cout << " This program is used to calculate the total deposits, withdrawals, interest, and ending balance. \n\n ";
    
    cout << "___________________________________\n\n";
    
    
    // *********Declorations of all variables******//
    
    double yrInterestRate; // Annual interest rate
    double moInterestRate; // Monthly interest rate
    double balance; // Account balance
    double deposited; // Amount deposited in a single month
    double withDrawn; // Amount withdrawn in a single month
    double moIntPaid; // Interest paid in a single month
    double totalDeposits = 0; // Total of all deposits
    double totalWithdrawals = 0; // Total of all withdrawals
    double totalInterest = 0; // Total interest earned
    int months; // Number of months passed
    
    // ********Getting users inputs********//
    
    // Getting annual interest rate
    
    cout << " Enter in the annual interest rate (decimal number) (Ex. 4 % is .04)  :  ";
    cin >> yrInterestRate;
    
    // Checking that annual interest rate is NOT NEGATIVE
    while(yrInterestRate<0){
        cout << "\n\n The value for annual interest is negative, please enter a positive number : $ "; cin >> yrInterestRate;
    }
    
    // Getting the starting balance
    
    cout << " Enter in the starting balance : $  ";
    cin >> balance;
    
    // Checking that balance is NOT ZERO
    while(balance<=0){
        cout << "\n\n The value for the starting balance should not be zero, please enter a value greater : $"; cin >> balance;
    }
    
    // Getting the Numebr of Monthes
    cout << " Enter in the number of months : ";
    cin >> months;
    
    // Checking that the number of months is NOT NEGATIVE
    while(months<0){
        cout << "\n\n The value for the number of months is negative, please enter a positive number : //"; cin >> months;
    }
    
    // Calculation of the monthly interest rate
    
    moInterestRate = yrInterestRate/12;
    
    // Looping through the months for withdrawal and deposits
    
    for (int count = 1; count <= months; count++) {
        cout << "____________________________________\n " << endl;
        cout << " Month # "<< count;
        
        // Getting the deposit
        
        cout<< "\n\n Enter in the deposit for the month : $ ";
        cin >> deposited;
        
        // Checking the withdrawal this month
        
        while(deposited<0){
            cout << "\n\n The value for this months deposit is negative, please enter a positive number : $ "; cin >> deposited;
        }
        
        // Getting the withdrawal
        
        cout << "\n\n Enter in the withdrawal for the month: $ ";
        cin >> withDrawn;
        
        // Checking the withdrawal this month
        
        while(withDrawn<0){
            cout << "\n\n The value for this months withdrawal is negative, please enter a positive number : $ "; cin >> withDrawn;
        }
        
        // Calculating the totals
        
        balance += deposited; // Adding deposit to balance
        totalDeposits += deposited; // Adding deposit to total deposit
        balance -= withDrawn; // Subtracting the withdrawal from the balance
        totalWithdrawals += withDrawn; // Adding the withdrawal to the total withdrawals
        
        // Checking that balance is not NEGATIVE
        if(balance<0){
            cout << "\n The account has a balance of $ " << balance << endl;
            cout << " Because the balance is negative, the account ";
            cout << "has been closed.\n";
            break; // Breaking out of loop
        }
        
        // Calculating the monthly interest Paid and the total interest
        
        moIntPaid = (moInterestRate * balance);
        
        balance += moIntPaid;
        
        totalInterest += moIntPaid;
    }
    
    // Displaying the Results
    
    cout << "\n\n_______________________________\n\n";
    
    cout << setprecision(2) << fixed;
    
    cout << " The Ending Balance is : " << setw(5) << "$ " << balance<< endl; // Displaying Ending Balance
    
    cout << " The Amount for deposit : " << setw(5) << "$ " << totalDeposits << endl; // Display the total deposit
    
    cout << " The Amount for withdrawal : " << setw(5) << "$ " << totalWithdrawals << endl; // Display the total widthdrawal
    
    cout << " The Amount for interest earned : " << setw(5) << "$ " << totalInterest << endl; // Display the total interest earned
    
    return 0;
}
