//
//  main.cpp
//  Linked List Lab
//
//  Created by Shasanka nudurupati on 4/27/19.
//  Copyright © 2019 Shasanka nudurupati. All rights reserved.
//
//
#include "ListNode.h"
#include "LinkedList.h"
#include "Person.h"
#include "Wine.h"


//Function prototype

void printWineInfo(List<Wine> &wineList);
void printPersonInfo(List<Wine> &personList);

void printMeFirst(string name, string courseInfo);


template< class NODETYPE >
void printNoteInfo (  List< NODETYPE > & nodeList)
{
    
    NODETYPE *wp;
    wp = (NODETYPE *)nodeList.getInfo(0); //get node based on key
    
    ListNode< NODETYPE > *currentPtr;
    
    currentPtr =  nodeList.getFirstPtr();
    
    cout << "The node list is: \n";
    //print out all the info in linked list
    while ( currentPtr != 0 ) // display elements in list
    {
        wp = (NODETYPE *) currentPtr; //convert to correct data type
        wp->printInfo();  // calling the function that is part of the
        // data type
        currentPtr = currentPtr->getNextPtr();
    } // end while
}


void printWineInfo (  List<Wine> & wineList)
{
    Wine *wp;
    wp = (Wine *) wineList.getInfo(0); //get node based on key
    wp->printInfo();
    
    
    ListNode< Wine > *currentPtr;
    
    currentPtr =  wineList.getFirstPtr();
    
    cout << "The Wine list is: \n";
    //print out all the info in linked list
    while ( currentPtr != 0 ) // display elements in list
    {
        wp = (Wine *) currentPtr; //convert to correct data type
        wp->printInfo();
        currentPtr = currentPtr->getNextPtr();
    } // end while
}


void printPersonInfo(List< Person > &personList)
{
    Person *f;
    f = (Person *) personList.getInfo(0); //get node based on key
    f->printInfo();
    
    
    ListNode< Person > *currentPtr;
    
    currentPtr =  personList.getFirstPtr();
    
    cout << "The Employee list is: \n";
    //print out all the info in linked list
    while ( currentPtr != 0 ) // display elements in list
    {
        f = (Person *) currentPtr; //convert to correct data type
        f->printInfo();
        currentPtr = currentPtr->getNextPtr();
    } // end while
    
}

int main()
{
    
    printMeFirst("Ankit", "CS 116");
    
    List< int > list1; // storage for first list
    List< int > list2; // storage for second list
    Person p;
    
    // use data type Person for the Linked List
    List< Person > personList;
    
    p.set_info("Ron", 22);
    
    personList.insertAtFront( p,0 );
    
    p.set_info("Sha", 30);
    personList.insertAtBack( p,1 );
    
//    printPersonInfo(personList);
    printNoteInfo(personList);
    
    /* use the linked list for Wine data type
     */
    Wine w;
    
    List< Wine > wineList;
    w.setInfo("Prisoner", 2014, 92, 44.99, "Red");
    wineList.insertAtBack(w, 0);
    w.setInfo("Vermentino", 2014, 85, 27, "White");
    wineList.insertAtFront(w, 1);
    w.setInfo("Stags Chardonnay Carneros", 2013, 89, 45,
              "White");
    wineList.insertAtBack(w, 2);
    w.setInfo("Castello Barone Reserve Cabernet", 2011, 92, 92,
              "Red");
    //
    wineList.insertAtBack(w, 3);
    w.setInfo("Harlan Estate Bordeaux", 2011, 97, 850, "Red");
    wineList.insertAtFront(w, 4);
    w.setInfo("Futo Bordeaux Red", 2009, 97, 324.99, "Red");
    wineList.insertAtBack(w, 5);

//    printWineInfo(wineList);
    printNoteInfo(wineList);
    
    
    /*
     * Use int as data type for the linked List
     */
    // assign intger into first list, from 1 to 5
    for (int i=0; i <5;  i++){
        list1.insertAtBack( i, i );
    }
    // call function print to print the list
    list1.print();
    
    // assign from 5 to 10 into second list
    for (int i=5; i<10;i++){
        list2.insertAtFront(i, i );
//        list2.print();
    }
    list2.print();
    
} // end main

