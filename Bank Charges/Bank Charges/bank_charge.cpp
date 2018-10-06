//
//  main.cpp
//  Bank Charges
//
//  Created by Shasanka nudurupati on 9/24/18.
//  Copyright © 2018 Shasanka nudurupati. All rights reserved.
//
// This program is used to to calculate the monthly bank charge fee.
// This takes in the number of checks
//


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // Decloration of the Service Fee, Bank Balance, and # of checks
    int num_chk;
    double balance, serv_fee = 10;
    
    // Getting Users Information of Checks and Bank Balance
    cout<<" Monthly Service Fee Program " << endl;
    cout << "______________________________________________ \n\n";
    cout << "Enter in the Bank Balance : $";
    cin >> balance;
    cout << "\nEnter in the Number of Checks: ";
    cin >> num_chk;
    cout << "\n______________________________________________ \n\n ";
    cout << "\nBank Balance :" << setw(19)<< "$" << balance;
    cout << "\nNumber of Checks :" << setw(5) << num_chk;
    

    // Exiting the program if balance is - or check is - and if both are -.
    if( balance < 0 || num_chk <0){
        cout << "\n______________________________________________ \n\n ";
        cout << "VALUE ERROR FROM USER :\n\n";
        cout << "The value that was put in for the number of checks or balance is NEGATIVE(-). \nPlease run the program again with both as POSTIVE(+) numbers.\n\n";
        
        
        if (balance < 0 && num_chk<0){
            cout << "\n______________________________________________ \n\n ";
            cout << " Both the numbers entered are  NEGATIVE(-). \n  Please run the program again with both as POSTIVE(+) numbers \n\n";
        }
        
    }
    
    
   //  Checking if bank balance is less than $400
    if ( balance <400)
        serv_fee+=15;
    
    
    // Adding the Check Fees
    if ( num_chk < 20)
        serv_fee = serv_fee + (num_chk*.10);
    else if(num_chk >=20 && num_chk <=39)
        serv_fee = serv_fee + (num_chk*0.08);
    else if(num_chk >= 40 && num_chk <=59)
        serv_fee =  serv_fee+(num_chk*0.06);
    else
        serv_fee = serv_fee+(num_chk*0.04);
    
    // Display the Banks Service Fee
    
    cout << "\n______________________________________________ \n\n ";
    cout << setprecision(2)<< fixed;
    cout << "The Bank Service Fee :" << setw(10)<< "$" << serv_fee << endl;
    
    
    return 0;
}
