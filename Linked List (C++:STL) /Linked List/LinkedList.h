//
//  LinkedList.hpp
//  Linked List Lab
//
//  Created by Shasanka nudurupati on 4/28/19.
//  Copyright © 2019 Shasanka nudurupati. All rights reserved.
//


#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>
#include "Person.h"
#include "Wine.h"
#include "ListNode.h"
#include <string>
#include <iostream>
#include <iomanip>


template<class NODETYPE>

class List {
protected:
    ListNode<NODETYPE> *firstPtr;
    ListNode<NODETYPE> *lastPtr;
    ListNode<NODETYPE> *getNewNode( const NODETYPE &value, int){
        ListNode<NODETYPE> *ptr = new ListNode<NODETYPE>(value);
        return ptr;
    }
    
public:
    
    /*
     * An empty constructor that is used to set the first and last pointers to 0
     */
    List(){
        firstPtr = lastPtr = 0;
    }
    /*
     *
     */
    List(const List< NODETYPE > &copy){
        firstPtr = lastPtr = 0;
        
        ListNode<NODETYPE> *currentPtr = copy.firstPtr;
        
        
        while( currentPtr != 0 ){
            insertAtBack(currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
    }
    
    bool isEmpty() const{
        return firstPtr == 0;
    }
    
    /*
     * This is a distrutor that is used to remove the points and data of all the nodes in the linked list
     */
    ~List(){
        if( !isEmpty()){
            cout << "Destroy nodes ...\n";
            ListNode<NODETYPE> *currentPtr = firstPtr;
            ListNode<NODETYPE> *tempPtr;
            while (currentPtr != 0) {
                tempPtr = currentPtr;
                currentPtr = currentPtr->nextPtr;
                delete tempPtr;
            }
        }
    }
    /*
     * This functions purpose is to insert a new node in front of the linked list and move the first pointer to the new node
     @param value ~ a NODETYPE reference, and key ~ an integer key
     */
    void insertAtFront( const NODETYPE &value, int key){
        
        ListNode<NODETYPE> *newPtr = getNewNode(value
                                                , key);
        if( isEmpty()){
            firstPtr = lastPtr = newPtr;
        }
        else
        {
            newPtr->nextPtr = firstPtr;
            firstPtr = newPtr;
            
        }
    }
    void insertAtBack( const NODETYPE &value, int key){
        ListNode<NODETYPE> *newPtr = getNewNode(value, key);
        if(isEmpty()){
            firstPtr=lastPtr=newPtr;
        }
        else{
            lastPtr->nextPtr = newPtr;
            lastPtr = newPtr;
        }
    }
    bool removeFromFront(NODETYPE &value){
            if(isEmpty()){
                return false;
            }
            else
            {
                ListNode<NODETYPE> *tempPtr = firstPtr;
        
                if(firstPtr == lastPtr){
                    firstPtr = lastPtr = 0;
                }
                else
                {
                    firstPtr = firstPtr->nextPtr;
                }
                value = tempPtr->data;
                delete tempPtr;
                return true;
            }
        
        }
    

    bool removeFromBack(NODETYPE &value){
        if(isEmpty())
            return false;
        else{
            ListNode<NODETYPE> *tempPtr = lastPtr;
            if(firstPtr == lastPtr){
                firstPtr = lastPtr=0;
            }
            else{
                ListNode<NODETYPE> *currentPtr = firstPtr;
                while (currentPtr->nextPtr != lastPtr) {
                    currentPtr = currentPtr->nextPtr;
                }
                lastPtr = currentPtr;
                currentPtr->nextPtr = 0;
            }
            value = tempPtr->data;
            delete tempPtr;
            return true;
        }
    }

    void print() const{
        if ( isEmpty() ) // empty list
        {
            cout << "The list is empty\n\n";
            return;
        } // end if
        
        ListNode< NODETYPE > *currentPtr = firstPtr;
        
        //cout << "The list is: ";
        
        while ( currentPtr != 0 ) // display elements in list
        {
            int i;
            string s;
            double d;
            char c;
            if (typeid(currentPtr->data).name() == typeid(i).name() ||
                typeid(currentPtr->data).name() == typeid(d).name() ||
                typeid(currentPtr->data).name() == typeid(s).name() ||
                typeid(currentPtr->data).name() == typeid(c).name())
            {
                // data value is a simple data type and can be printed
                cout << currentPtr->data << ' ';
            }
            else {
                cout <<"Can't print - Not a simple data type (int, string, char, double)\n";
            }
            currentPtr = currentPtr->nextPtr;
        } // end while
        
        cout << "\n\n";
    }
    void printPtrFinc();
    NODETYPE *getInfo(int myKey){
        if ( isEmpty() ) // empty list
        {
            cout << "The list is empty\n\n";
            return NULL;
        } // end if
        
        ListNode< NODETYPE > *currentPtr = firstPtr;
        
        while ( currentPtr != 0 ) // display elements in list
        {
            if (currentPtr->key == myKey )  // found
                return (& currentPtr->data);
            
            currentPtr = currentPtr->nextPtr;
        } // end while
        
        return NULL;  // can't find
    }
    ListNode<NODETYPE> *getFirstPtr() const{
        return firstPtr;
    }
    
};


#endif /* LinkedList_h */

