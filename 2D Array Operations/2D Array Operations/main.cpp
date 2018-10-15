//
//  main.cpp
//  2D Array Operations
//
//  Created by Shasanka nudurupati on 10/14/18.
//  Copyright © 2018 Shasanka nudurupati. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

// Constants for the array sizes
const int ROWS = 4;
const int COLS = 5;

// Function prototypes
int getTotal(int[][COLS], int, int);
double getAverage(int[][COLS], int, int);
int getRowTotal(int[][COLS], int, int);
int getColumnTotal(int[][COLS], int, int);
int getHighestInRow(int[][COLS], int, int);
int getLowestInRow(int[][COLS], int, int);
int userInputRow(int);
int userInputCol(int);

int main() {
   
    // Display the Title Program
    
    cout << setw(10) << " 2D Array Operations " << endl;
    cout << "\n\n____________________________________ " << endl;
    
    // Filling the Array with Numbers
    
    int testArray[ROWS][COLS] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 },
        { 16, 17, 18, 19, 20 }
    };
    
    // Variables for highest and lowest
    
    int rowTot = 0;
    int colTot = 0;
    int rowMaxMin = 0;
    
    // Displaying the Array
    cout << "\n\n The Elements in the array are : " << endl;
    for (auto& row: testArray){
        for (auto& num : row){
            cout <<  num << endl;
        }
    }
    // Get user input and puttin those in variables
   
     cout << "\n\n____________________________________ " << endl;
    
    cout << " Getting users input for getting the Row & Column totals  \n\n" << endl;
    rowTot = userInputRow(ROWS);
    cout << " \n\n"<< endl;
    colTot = userInputCol(COLS);
    
    cout << "\n\n Getting user input for the row with highest and lowest value  \n\n" << endl;
    rowMaxMin = userInputRow(ROWS);
    
    // Variables for highest and lowest
    
    int low = getLowestInRow(testArray, rowMaxMin, COLS);
    int high = getHighestInRow(testArray, rowMaxMin, COLS);
    
    
    // Display the Total
    cout << "\n\n____________________________________ " << endl;
    cout << "\n\n" << setw(10) << " The Results : " << endl;
    cout << "\n\n____________________________________ " << endl;
    
    cout << " The Total values in the array : " << getTotal(testArray,ROWS, COLS);
    
    // Display the Average
    
    cout << "\n\n The Average in the array : " << getAverage(testArray, ROWS, COLS);
    
    // Display the total number of rows
    
    cout << "\n\n The Total Number in the row : " << getRowTotal(testArray, rowTot, COLS);
    
    //  Display Column Total
   
    cout << "\n\n The Total Number of Columns : " << getColumnTotal(testArray, colTot, ROWS);
    
    // Display the Highest Number in a specific row
    
    cout << "\n\n The Highest Number in the row : " << high;
    
    // Display the Lowest in a specific row
    
     cout << "\n\n The Lowest Number in the row : " << low;
    
    cout << "\n\n"<< endl;
    
    return 0;
}

// Function to get specific row

int userInputRow(int row)
{
    int usRow=0;
    cout << " Enter in the row (Ex. 1 or 2 for the row you want to call) : ";
    cin >> usRow;
    // Checking for bounds errors
    while (usRow < 0 || usRow > row-1){
        cout << "\n\n The row that you are calling is not in the array. \n Please try again : ";
        cin >> usRow;
    }
    return usRow;
}

// Function to get specific column

int userInputCol(int col){
    int usCol=0;
    cout << " Enter in the col (Ex. 1 or 2 for the col you want to call) : ";
    cin >> usCol;
    
    while (usCol < 0 || usCol > col-1){
        cout << "\n\n The col that you are calling is not in the array. \n Please try again : ";
        cin >> usCol;
    }
    
    return usCol;
}

// Function for calculating the total

int getTotal(int array[][COLS], int rows, int cols)
{
    int sum=0;
    for(int i = 0; i <rows; i++){
        for (int z = 0; z < cols; z++){
            sum += array[i][z];
        }
    }
    return sum;
    
}

// Function to Calculate the Average Number in the Array

double getAverage(int array[][COLS], int rows, int cols)
{
    int counter=0;
    for(int i = 0; i <rows; i++){
        for (int z = 0; z < cols; z++){
           ++counter;
        }
    }
    
    return double(getTotal(array, rows, cols))/counter;
}

//Function to get the row total in the Array

int getRowTotal(int array[][COLS], int rowToTotal, int cols)
{
    int rowTotal = 0;
    for(int i =0; i < cols; i++){
        rowTotal += array[rowToTotal][i];
    }
    
    return rowTotal;
    
}

// Function to get the column total in the array

int getColumnTotal(int array[][COLS], int colToTotal, int rows)
{
    int colTotal = 0;
    for (int i=0 ; i<rows; i++ ){
        colTotal += array[i][colToTotal];
    }
    return colTotal;
}

// Function to get the highest value in the array

int getHighestInRow(int array[][COLS], int rowToSearch, int cols)
{
    int numHigh = array [rowToSearch][0];
    
    for (int c = 0; c < cols ; c++ ){
        if(numHigh<array[rowToSearch][c]){
            numHigh = array[rowToSearch][c];
        }
    }
    
    
    return numHigh;
}
// Function to get the lowest value in the Array

int getLowestInRow(int array[][COLS], int rowToSearch, int cols)
{
    int numLow = array [rowToSearch][0];
    for (int c = 0; c < cols ; c++ ){
        if(numLow > array[rowToSearch][c]){
            numLow = array[rowToSearch][c];
        }
    }
    
    return numLow;
}

