//
//  ListQueue.cpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "ListQueue.hpp"

bool ListQueue::isEmpty()
{
    return list.head == nullptr;
}

void ListQueue::push(int value)
{
    list.insert(new ListElement(value));
}

int ListQueue::pop()
{
    if (isEmpty()) return -1;
    
    ListElement *element = list.head;
    
    if (element->next) {
        list.head = element->next;
        element->prev = nullptr;
    }
    
    return element->key;
}

