//
//  ArrayStack.cpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "ArrayStack.hpp"

bool ArrayStack::isEmpty()
{
    return vector.size() == 0;
}

void ArrayStack::push(int value)
{
    vector.push_back(value);
}

int ArrayStack::pop()
{
    int value = vector[vector.size()];
    vector.pop_back();
    return value;
}
