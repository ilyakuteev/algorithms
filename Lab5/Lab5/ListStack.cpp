//
//  ListStack.cpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "ListStack.hpp"

bool ListStack::isEmpty()
{
    return list.head == nullptr;
}

void ListStack::push(int value)
{
    list.insert(new ListElement(value));
}

int ListStack::pop()
{
    if (isEmpty()) return -1;
    
    ListElement *element = list.getTail();
    
    element->prev->next = nullptr;
    
    return element->key;
}
