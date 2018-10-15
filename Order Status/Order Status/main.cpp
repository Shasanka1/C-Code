//
//  main.cpp
//  Order Status
//
//  Created by Shasanka nudurupati on 10/8/18.
//  Copyright © 2018 Shasanka nudurupati. All rights reserved.
//

/**
 
 Programming Callenge Number 6: Order Status
 
 */
 

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function prototypes
void getStockInfo(int&, int&, double&);
void displayStatus (int, int,double = 100);
void errorCheck(int);

int main() {
    // Variables for holding the user's data
    
    int ordered=0; // spools order
    int inStock=0; // spools stock
    double specialShipping=0.0; // special shipping charges
    
    // Function to get users data
    getStockInfo(ordered, inStock, specialShipping);
    
    // Function Display OutCome
    displayStatus(ordered, inStock, specialShipping);
    
    return 0;
    
}

// This function is used to check user input error

void errorCheck(int value){
    
    while (value <= 1) {
        cout << " The value you entered" << value << "is not valid.  Please enter a value that is greater than 0. : ";
        cin >>value;
    }
    
}

void getStockInfo(int &ordered , int &inStock, double &specialShipping){
    
    string choice; // Checking for special orders
    
    cout << " This is the Order Status Program \n\n" << endl;
    cout << " ________________________________" <<endl;

    // Getting users Data

    cout << "\n\n Enter in the number of spools ordered : ";
    cin >> ordered;

    errorCheck(ordered);

    cout << "\n Enter in the number of spools on stock : " ;
    cin >> inStock;

    errorCheck(inStock);
    
    cout << "\n Where there any special orders requested (Answer yes of no) : ";
    cin >> choice;

    if (choice == ("Yes") || choice == ("YES")  || choice == ("yes")){
        cout << " \n\n Please Enter in the amount for special shipping charges : $";
        cin >> specialShipping;
        while (specialShipping < 1){
            cout << " The amount that you put in for the special shipping charges $" << specialShipping << " needs to be bigger than $0. /n Please enter it again : $";
            cin >> specialShipping;
        }
    }
    else {
        specialShipping= 0;

    }

}

void displayStatus(int ordered, int inStock, double specialShipping){
    cout << " \n\n-------------------------------------------------------\n";
    cout << "\n\n  The Middletown Wholesale Copper Wire Order Status\n"
    << "-------------------------------------------------------\n";
    
    const double UNIT_SPOOL_COST = 100.00;
    const double shipping = 10.0;

    int available = ordered; // Number of spools available to ship
    int backOrder = 0; // Number of spools back ordered
    

    double spoolCost; // Charges for spools shipping now
    double shipCharges; // Shipping charges for this shipment
    double totalCharges; // Cost of shipped spools + shipping chgs
    
    // Checking for Back Orders
    
    cout << " - The number of ordered spools \n\t ready to ship from current stock:  ";
    
    if( ordered > inStock){
        available = inStock;
        backOrder = ordered - inStock;
        cout << " " << setw(2) << available << " \n\n - The number of orders are : " << setw(13) << ordered << "\n\n - The number of backorders are : " << setw(8) << backOrder ;
    }
    else {
        available = ordered;
        cout << setw(5)<< available << endl;
    }
    
    // Calculations
    
    spoolCost = available * UNIT_SPOOL_COST;
    shipCharges = shipping + specialShipping;
    totalCharges = spoolCost + shipCharges;
    
    // Display the totals
    
    cout << setw(20) << "\n\n The Totals " << endl;
    cout << "\n ___________________________________________\n\n";
    cout << fixed << showpoint << setprecision(2);
    cout << "Total selling price of the portion ready to ship          : $"
    << setw(10) << spoolCost << endl;
    cout << "Total shipping and handling on the portion ready to ship  : $"
    << setw(10) << shipCharges << endl;
    cout << "Total of the order ready to ship                          : $"
    << setw(10) << totalCharges << endl;
    
    cout << setw(20) << " \n\nThe overall inputs ";
    cout << "\n\n\n - The amount of orders inputed was : " << setw(10) << ordered;
    cout << "\n - The amount of instock inputed was : " << setw(9) << inStock;
    cout << "\n - The charge for special shipping is : " << setw(10) << specialShipping;
    cout << "\n - The amount available :" << setw(23) << available;
    cout << "\n - The amount backordered is :" << setw(17) << backOrder;
    
}

