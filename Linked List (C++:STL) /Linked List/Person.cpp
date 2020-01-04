//
//  Person.cpp
//  Linked List Lab
//
//  Created by Shasanka nudurupati on 4/28/19.
//  Copyright © 2019 Shasanka nudurupati. All rights reserved.
//

#include "Person.h"

Person::Person()
{
}

Person::Person(string pname, int page)
{
    name = pname;
    age = page;
}

string Person::get_name() const
{
    return name;
}

int Person::get_age() const
{
    return age;
}

