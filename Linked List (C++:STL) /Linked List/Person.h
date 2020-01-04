//
//  Person.hpp
//  Linked List Lab
//
//  Created by Shasanka nudurupati on 4/28/19.
//  Copyright © 2019 Shasanka nudurupati. All rights reserved.
//

#ifndef Person_h
#define Person_h

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
    string name; // the name of the person
    int age; // the age of the person
    
public:
    /*
     * An empty constructor that initalizes the values of name and age to nothing
     */
    Person();
    /*
     * A constructor that initalizes the values of name and age to the prameters of the two argument constructor
     @param pname ~ string of name, page ~ integer for age
     
     */
    
    Person(string pname, int page);
    
    void set_name(string n) {name = n;};
    void set_age(int a) {age = a;};
    void set_info(string n, int a) {name = n; age=a;};
    string get_name() const;
    int get_age() const;
    void printInfo() { cout <<"Name: "<<name;
        cout << "\tAge: "<<age<<endl; };

    
};

#endif /* Person_h */
