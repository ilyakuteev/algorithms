//
//  BinaryTree.cpp
//  Lab5
//
//  Created by Ilya Kuteev on 19.04.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "BinaryTree.hpp"

void BinaryTree::insert(int key)
{
    if (this->key == key) {
        return;
    } else if (this->key > key) {
        
        if (!leftSubtree) {
            leftSubtree = new BinaryTree();
            leftSubtree->key = key;
        } else {
            leftSubtree->insert(key);
        }
        
    } else {
        
        if (!rightSubtree) {
            rightSubtree = new BinaryTree();
            rightSubtree->key = key;
        } else {
            rightSubtree->insert(key);
        }
        
    }
}

BinaryTree* BinaryTree::find(int key)
{
    if (this->key == key) {
        return this;
    } else if (this->key > key) {
        
        if (leftSubtree) {
            return leftSubtree->find(key);
        } else {
            return nullptr;
        }
        
    } else {
        
        if (rightSubtree) {
            return rightSubtree->find(key);
        } else {
            return nullptr;
        }
        
    }
}
