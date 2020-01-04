//
//  Wine.cpp
//  Linked List Lab
//
//  Created by Shasanka nudurupati on 4/28/19.
//  Copyright © 2019 Shasanka nudurupati. All rights reserved.
//

#include "Wine.h"

Wine::Wine()
{
    price = 0;
}

Wine::Wine(string name, int vintage, int score, double price, string type)
{
    this->name = name;
    this->vintage = vintage;
    this->score = score;
    this->price = price;
    this->type = type;
}

void Wine::setInfo(string name, int vintage, int score, double price, string type)
{
    this->name = name;
    this->vintage = vintage;
    this->score = score;
    this->price = price;
    this->type = type;
}

void Wine::setPrice(double price)
{
    this->price = price;
}

string Wine::getName() const
{
    return name;
}

int Wine::getPrice() const
{
    return price;
}

void Wine::printInfo()
{
    cout << setw(33) <<name << setw (8) << type;
    cout << setw (5) << price << " ; Rating: " << score << "  Year: "
    << vintage << endl;
}

