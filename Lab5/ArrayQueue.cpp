//
//  ArrayQueue.cpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "ArrayQueue.hpp"

bool ArrayQueue::isEmpty()
{
    return vector.size() == 0;
}

void ArrayQueue::push(int value)
{
    vector.push_back(value);
}

int ArrayQueue::pop()
{
    int value = vector[0];
    vector.erase(vector.begin());
    return value;
}

