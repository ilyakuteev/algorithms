//
//  PriorityQueue.hpp
//  AlroritmsHomework1
//
//  Created by Ilya Kuteev on 11.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#ifndef PriorityQueue_hpp
#define PriorityQueue_hpp

#include <iostream>
#include <vector>


class PriorityQueue
{
public:
  
  void push(int element);
  
  void pop();
  
  int top();
  
private:
  
  void heapify(int i);
  
  std::vector<int> elements;
  
};


void heapSort(std::vector<int> &vec);


#endif /* PriorityQueue_hpp */
