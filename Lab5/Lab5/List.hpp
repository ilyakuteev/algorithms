//
//  List.hpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

class ListElement
{
public:
    
    int key;
    
    ListElement *next;
    ListElement *prev;
    
    ListElement(int key);
    
};

class List
{
public:
    
    ListElement *head;
    
    ListElement *getTail();
    
    void insert(ListElement *element);
    
    ListElement *search(int key);
    
    void print();
    
};

#endif /* List_hpp */
