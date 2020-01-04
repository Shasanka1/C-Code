//
//  LinkedList.cpp
//  Linked List Lab
//
//  Created by Shasanka nudurupati on 4/28/19.
//  Copyright © 2019 Shasanka nudurupati. All rights reserved.
//

//
//#include "LinkedList.h"
//using namespace std;
//
//template <class NODETYPE>
//List<NODETYPE>:: List(){
//    firstPtr = lastPtr = 0;
//}
//
//template <class NODETYPE>
//List<NODETYPE>:: List( const List<NODETYPE> &copy){
//    firstPtr = lastPtr = 0;
//
//    ListNode<NODETYPE> *currentPtr = copy.firstPtr;
//
//
//    while( currentPtr != 0 ){
//        insertAtBack(currentPtr->data);
//        currentPtr = currentPtr->nextPtr;
//    }
//}
//
//template <class NODETYPE>
//List<NODETYPE>::~List(){
//    if( !isEmpty()){
//        cout << "Destroy nodes ...\n";
//        ListNode<NODETYPE> *currentPtr = firstPtr;
//        ListNode<NODETYPE> *tempPtr;
//        while (currentPtr != 0) {
//            tempPtr = currentPtr;
//            currentPtr = currentPtr->nextPtr;
//            delete tempPtr;
//        }
//    }
//}
//
//template< class NODETYPE>
//void List<NODETYPE>::insertAtBack(const NODETYPE &value, int key)
//{
//    ListNode<NODETYPE> *newPtr = getNewNode(value, key);
//    if(isEmpty()){
//        firstPtr=lastPtr=newPtr;
//    }
//    else{
//        lastPtr->nextPtr = newPtr;
//        lastPtr = newPtr;
//    }
//}
//
//template <class NODETYPE>
//void List<NODETYPE>::insertAtFront(const NODETYPE &value
//                                   , int key)
//{
//    ListNode<NODETYPE> *newPtr = getNewNode(value
//                                            , key);
//    if( isEmpty()){
//        firstPtr = lastPtr = newPtr;
//    }
//    else
//    {
//        newPtr->nextPtr = firstPtr;
//        firstPtr = newPtr;
//    }
//}
//
//template<class NODETYPE>
//bool List<NODETYPE>::removeFromFront(NODETYPE &value){
//    if(isEmpty()){
//        return false;
//    }
//    else
//    {
//        ListNode<NODETYPE> *tempPtr = firstPtr;
//
//        if(firstPtr == lastPtr){
//            firstPtr = lastPtr = 0;
//        }
//        else
//        {
//            firstPtr = firstPtr->nextPtr;
//        }
//        value = tempPtr->data;
//        delete tempPtr;
//        return true;
//    }
//
//}
//
//template<class NODETYPE>
//bool List<NODETYPE>::removeFromBack(NODETYPE &value){
//    if(isEmpty())
//        return false;
//    else{
//        ListNode<NODETYPE> *tempPtr = lastPtr;
//        if(firstPtr == lastPtr){
//            firstPtr = lastPtr=0;
//        }
//        else{
//            ListNode<NODETYPE> *currentPtr = firstPtr;
//            while (currentPtr->nextPtr != lastPtr) {
//                currentPtr = currentPtr->nextPtr;
//            }
//            lastPtr = currentPtr;
//            currentPtr->nextPtr = 0;
//        }
//        value = tempPtr->data;
//        delete tempPtr;
//        return true;
//    }
//}
//
//template<class NODETYPE>
//bool List<NODETYPE>:: isEmpty() const
//{
//    return firstPtr == 0;
//}
//
//template<class NODETYPE>
//ListNode<NODETYPE> *List<NODETYPE>::getNewNode(const NODETYPE &value, int)
//{
//    ListNode<NODETYPE> *ptr = new ListNode<NODETYPE>(value);
//    return ptr;
//}
//
//// Display the contents of the List
//template< class NODETYPE >
//void List< NODETYPE >::print() const
//{
//    if ( isEmpty() ) // empty list
//    {
//        cout << "The list is empty\n\n";
//        return;
//    } // end if
//
//    ListNode< NODETYPE > *currentPtr = firstPtr;
//
//    //cout << "The list is: ";
//
//    while ( currentPtr != 0 ) // display elements in list
//    {
//        int i;
//        string s;
//        double d;
//        char c;
//        if (typeid(currentPtr->data).name() == typeid(i).name() ||
//            typeid(currentPtr->data).name() == typeid(d).name() ||
//            typeid(currentPtr->data).name() == typeid(s).name() ||
//            typeid(currentPtr->data).name() == typeid(c).name())
//        {
//            // data value is a simple data type and can be printed
//            cout << currentPtr->data << ' ';
//        }
//        else {
//            cout <<"Can't print - Not a simple data type (int, string, char, double)\n";
//        }
//        currentPtr = currentPtr->nextPtr;
//    } // end while
//
//    cout << "\n\n";
//}
//
//// Display the contents of the List
//template< class NODETYPE >
//NODETYPE *List< NODETYPE >::getInfo(int myKey)
//{
//    if ( isEmpty() ) // empty list
//    {
//        cout << "The list is empty\n\n";
//        return NULL;
//    } // end if
//
//    ListNode< NODETYPE > *currentPtr = firstPtr;
//
//    while ( currentPtr != 0 ) // display elements in list
//    {
//        if (currentPtr->key == myKey )  // found
//            return (& currentPtr->data);
//
//        currentPtr = currentPtr->nextPtr;
//    } // end while
//
//    return NULL;  // can't find
//} // end function print
//
