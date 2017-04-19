//
//  BinaryTree.hpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp


class BinaryTree {
public:
    
    int key;
    int value;
    
    BinaryTree *leftSubtree;
    BinaryTree *rightSubtree;
    
    void insert(int key);
    
    BinaryTree *find(int key);
};

#endif /* BinaryTree_hpp */
