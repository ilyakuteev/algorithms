//
//  main.cpp
//  AlrorithmsTask2
//
//  Created by Ilya Kuteev on 11.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include <iostream>
#include <vector>
#include "PriorityQueue.hpp"

void printVector(std::vector<int> &vec)
{
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;
}

int main(int argc, const char * argv[])
{
  
  std::vector<int> vec = {1, 4, 6, 3, 8, 20, 99, 3};
  
  heapSort(vec);
  printVector(vec); //1 3 3 4 6 8 20 99
  
  
  std::vector<int> vec2;
  
  for (int i = 0; i < 10; i++) {
    vec2.push_back(arc4random() % 100);
  }
  
  printVector(vec2); //53 15 40 22 72 67 15 81 36 20
  
  heapSort(vec2);
  
  printVector(vec2); //15 15 20 22 36 40 53 67 72 81
  
  
  std::vector<int> vec3;
  
  for (int i = 0; i < 100; i++) {
    vec3.push_back(arc4random() % 1000);
  }
  
  printVector(vec3); //302 942 256 411 183 627 783 569 837 460 819 638 771 268 595 956 190 108 240 675 55 724 168 598 311 522 328 615 563 472 684 586 149 89 199 19 355 21 964 418 766 383 245 152 731 339 953 311 827 855 160 543 602 682 593 251 920 407 522 66 253 38 718 27 74 407 615 947 541 629 443 236 21 525 269 254 299 719 555 424 289 101 808 46 863 778 14 413 408 145 166 24 225 168 914 764 557 331 514 974
  
  heapSort(vec3);
  
  printVector(vec3); //14 19 21 21 24 27 38 46 55 66 74 89 101 108 145 149 152 160 166 168 168 183 190 199 225 236 240 245 251 253 254 256 268 269 289 299 302 311 311 328 331 339 355 383 407 407 408 411 413 418 424 443 460 472 514 522 522 525 541 543 555 557 563 569 586 593 595 598 602 615 615 627 629 638 675 682 684 718 719 724 731 764 766 771 778 783 808 819 827 837 855 863 914 920 942 947 953 956 964 974
  
  
  return 0;
}
