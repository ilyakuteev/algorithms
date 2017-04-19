//
//  ArrayQueue.hpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#ifndef ArrayQueue_hpp
#define ArrayQueue_hpp

#include <vector>

class ArrayQueue
{
public:
    
    bool isEmpty();
    
    void push(int value);
    
    int pop();
    
private:
    
    std::vector<int> vector;
    
};

#endif /* ArrayQueue_hpp */
