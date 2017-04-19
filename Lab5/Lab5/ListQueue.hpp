//
//  ListQueue.hpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#ifndef ListQueue_hpp
#define ListQueue_hpp

#include "List.hpp"

class ListQueue
{
public:
    
    bool isEmpty();
    
    void push(int value);
    
    int pop();
    
    
private:
    
    List list;
    
};

#endif /* ListQueue_hpp */
