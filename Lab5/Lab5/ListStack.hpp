//
//  ListStack.hpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#ifndef ListStack_hpp
#define ListStack_hpp

#include "List.hpp"


class ListStack
{
public:
    
    bool isEmpty();
    
    void push(int value);
    
    int pop();
    
private:
    
    List list;
    
};


#endif /* ListStack_hpp */
