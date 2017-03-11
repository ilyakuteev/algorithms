//
//  PriorityQueue.cpp
//  AlrorithmsTask2
//
//  Created by Ilya Kuteev on 11.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "PriorityQueue.hpp"

void PriorityQueue::push(int element)
{
  elements.push_back(element);
  
  int i = (int)elements.size() - 1;
  int parent = (i - 1) / 2;
  
  while (i > 0 && elements[parent] < elements[i]) {
    
    int t = elements[i];
    elements[i] = elements[parent];
    elements[parent] = t;
    
    i = parent;
    parent = (i - 1) / 2;
  }
}

void PriorityQueue::pop()
{
  elements[0] = elements[elements.size() - 1];
  elements.erase(elements.end()-1);
  heapify(0);
}

int PriorityQueue::top()
{
  return this->elements[0];
}

void PriorityQueue::heapify(int i)
{
  int leftChild;
  int rightChild;
  int largestChild;
  
  while (true) {
    
    leftChild = 2 * i + 1;
    rightChild = 2 * i + 2;
    largestChild = i;
    
    if (leftChild < elements.size() && elements[leftChild] > elements[largestChild]) {
      largestChild = leftChild;
    }
    
    if (rightChild < elements.size() && elements[rightChild] > elements[largestChild]) {
      largestChild = rightChild;
    }
    
    if (i == largestChild) {
      break;
    }
    
    int t = elements[i];
    elements[i] = elements[largestChild];
    elements[largestChild] = t;
    i = largestChild;
  }
  
  for (int i = 0; i < elements.size(); i++) {
    std::cout << elements[i] << " ";
  }
  std::cout << std::endl;
}


void heapSort(std::vector<int> &vec)
{
  PriorityQueue queue;
  
  for (int i = 0; i < vec.size(); i++) {
    queue.push(vec[i]);
  }
  
  for (int i = (int)vec.size() - 1; i >= 0; i--) {
    vec[i] = queue.top();
    queue.pop();
  }
}
