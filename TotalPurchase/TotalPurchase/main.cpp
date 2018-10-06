//
//  main.cpp
//  TotalPurchase
//
//  Created by Shasanka nudurupati on 9/4/18.
//  Copyright © 2018 Shasanka nudurupati. All rights reserved.
// 
#include <iostream>

const double SALES_TAX = 0.07;
using namespace std;

int main() {
    
    // Variables to hold the price of the items
    
    double item1, item2, item3, item4, item5, subtotal,total;
    
    item1 = 15.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 12.95;
    item5 = 3.95;
    
    // Calculation of the subtotal
    subtotal = item1+item2+item3+item4+item5;
    
    // Calculation of the total
    total = subtotal+(SALES_TAX*subtotal);
    
    
    // Display of the prices of each item, the subtotal, and the total
    cout << " This Program is used to calculate different values for items \n";
    
    // ****** Display of Items
    
    cout << " \n\n Item #1: $" << item1 << "\n Item #2: $" <<item2<< "\n Item #3: $"  <<item3<< "\n Item #4: $"<< item4 << "\n Item #5: $" << item5 << endl;
    
    // ****** Display of Subtotal
    
    cout << "\n The Subtotal is:  $" << subtotal;
    
    // ****** Display of Total
    // The printf(%.1f",total) is used to round floats and doubles to a specific decimal
    // place. Found this out by searching online.
    
    cout << "\n The Total is: $" << printf("%.1f",total);
    
    // ***** Display SALES_TAX
    cout << "\n The Sales Tax is :" << SALES_TAX << "\n\n";
    
    return 0;
}

