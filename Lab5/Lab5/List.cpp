//
//  List.cpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "List.hpp"
#include <iostream>

ListElement::ListElement(int key):
key(key), prev(nullptr), next(nullptr)
{}

ListElement* List::getTail()
{
    ListElement *element = head;
    
    while (element && element->next) {
        element = element->next;
    }
    
    return element;
}

void List::insert(ListElement *element)
{
    element->next = head;
    element->prev = nullptr;
    
    if (head) {
        head->prev = element;
    }
    
    head = element;
}
 
void List::print()
{
    ListElement *printedElement = head;
    
    while (printedElement) {
        
        std::cout << printedElement->key << " ";
        
        printedElement = printedElement->next;
    }
    
    std::cout << std::endl;
}

ListElement* List::search(int key)
{
    ListElement *element = head;
    
    while (element && element->key != key) {
        element = element->next;
    }
    
    return element;
}
