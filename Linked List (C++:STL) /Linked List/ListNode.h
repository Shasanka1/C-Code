//
//  ListNode.hpp
//  Linked List Lab
//
//  Created by Shasanka nudurupati on 4/28/19.
//  Copyright © 2019 Shasanka nudurupati. All rights reserved.
//

#ifndef ListNode_h
#define ListNode_h

#include <stdio.h>

template < class T > class List;

template< class NODETYPE >

class ListNode {

private:
    NODETYPE data;
    int key;
    ListNode *nextPtr;

public:
    friend class List< NODETYPE>;
    ListNode ( const NODETYPE &info){
        data = info;
        nextPtr = 0;
    }
    NODETYPE getData() const{
        return data;
    }
    void setNextPtr(ListNode *nPtr){
        
    }
    ListNode *getNextPtr() const{
        return nextPtr;
    }

};

#endif /* ListNode_h */
