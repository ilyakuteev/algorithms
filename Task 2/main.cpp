//
//  main.cpp
//  AlroritmsHomework1
//
//  Created by Ilya Kuteev on 11.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include <iostream>
#include <vector>
#include "PriorityQueue.hpp"


int main(int argc, const char * argv[])
{
  std::vector<int> vec = {1, 4, 6, 3, 8, 20, 99, 3};
  
  heapSort(vec);
  
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
  
  return 0;
}
