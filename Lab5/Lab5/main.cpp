//
//  main.cpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include <iostream>
#include "List.hpp"
#include "ListStack.hpp"
#include "ListQueue.hpp"
#include "ArrayStack.hpp"
#include "ArrayQueue.hpp"
#include "BinaryTree.hpp"


int main(int argc, const char * argv[])
{
//    List list;
//    
//    list.insert(new ListElement(1));
//    list.insert(new ListElement(2));
//    list.insert(new ListElement(3));
//    list.insert(new ListElement(4));
//    list.insert(new ListElement(5));
//    
//    std::cout << list.search(3)->key << std::endl;
//    
//    list.print();
    
    BinaryTree tree;
    tree.insert(1);
    tree.insert(2);
    tree.insert(3);
    tree.insert(4);
    tree.insert(5);

    std::cout << tree.find(3)->key << std::endl;
    
    return 0;
}
