//
// Monthly Tax.cpp
//  Monthly Sales Tax
//
//  Created by Shasanka nudurupati on 9/13/18.
//  Copyright © 2018 Shasanka nudurupati. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

// Constants
const double COUNTY = 0.02; // Constants for the County Sales Tax
const double STATE = 0.04; // State Sales Tax
int main() {
    
    // Variables for the month, the year, and the total amount collected, Country's Sales Tax, State Sales Tax, Total Tax percent.
    string month;
    double year;
    double total_collected,
           percent_total,
           product_sales,
           county_sales_tax,
           state_sales_tax,
           total_sales_tax;

    
    
    // Getting user data
    
    cout <<  " Monthly Sales Tax Report: " << endl;
    
    cout << "\n Enter in the Month: " << endl;
    getline(cin,month);
    
    cout << "\n Enter in the Year:  " << endl;
    cin >>  year;
    
    cout << "\n Enter in the Amount Collected: " << endl;
    cin >> total_collected;
    
    
    // Calculations
    percent_total = 1 + (COUNTY+ STATE);
    product_sales = total_collected / percent_total;
    county_sales_tax = COUNTY*product_sales;
    state_sales_tax = STATE*product_sales;
    total_sales_tax = county_sales_tax+state_sales_tax;

    
    
    
    // Display the Month and Year
    
    cout << "\n_________________________" << endl;
    
    cout << "Month: " << month << endl;
    
    cout << "Year:  " << year << endl;
    
    
    cout << "\n_________________________" << endl;
    
    // Display the total collected, taxes, and sales.
    
    cout  << "Total Collected : "  << setw(4) << " $" << printf("%.1f",total_collected) << endl;
    
    cout << "Sales: "  << setw(15) <<  " $"  << printf("%.1f",product_sales) << endl;
    
    cout  << "County Sales Tax: "  << setw(4) << " $" <<  printf("%.1f",county_sales_tax) << endl;
    
    cout  << "State Sales Tax: "  << setw(5) << " $" << printf("%.1f",state_sales_tax)  << endl;
    
    cout   << "Total Sales Tax: "  << setw(5) << " $" << printf("%.1f",total_sales_tax) << endl;
    
    
    return 0;
}
