//
//  Wine.hpp
//  Linked List Lab
//
//  Created by Shasanka nudurupati on 4/28/19.
//  Copyright © 2019 Shasanka nudurupati. All rights reserved.
//

#ifndef Wine_h
#define Wine_h

#include <stdio.h>
#include <string>
#include<iomanip>
#include <iostream>
using namespace std;

class Wine
{
public:
    /*
     * An empty Constructor
     */
    Wine();
    
    /*
     *
     */
    Wine(string name, int vintage, int score, double price, string type);
    void setInfo(string name, int vintage, int score,
                 double price, string type);
    void setPrice(double price);
    string getName() const;
    int getPrice() const;
    void printInfo();
    
private:
    string name;
    int vintage;
    int score;
    double price;
    string type;
};


#endif /* Wine_hpp */
