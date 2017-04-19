//
//  ArrayStack.hpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#ifndef ArrayStack_hpp
#define ArrayStack_hpp

#include <vector>

class ArrayStack
{
public:
    
    bool isEmpty();
    
    void push(int value);
    
    int pop();
    
private:
    
    std::vector<int> vector;
    
};

#endif /* ArrayStack_hpp */
