//
//  RadixSort.cpp
//  AlrorithmsTask3
//
//  Created by Ilya Kuteev on 14.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "RadixSort.hpp"
#include <cstdlib>


int radix_digit(int64_t num, int64_t pos)
{
    return (int) (num >> (8 * pos) & 255);
}

std::vector<int64_t> radixSort(std::vector<int64_t> &numbers) {
    int b[8];
    
    int k = sizeof(int);
    
    int n = (int)numbers.size();
    
    for (int i = 0; i < k; i++) {
        
        int c[256] = {0};
        
        for (int j = 0; j < n; j++) {
            c[radix_digit(numbers[j], i)]++;
        }
        
        for (int j = 1; j < 256; j++) {
            c[j] += c[j - 1];
        }
        
        for (int j = n - 1; j > -1; j--) {
            b[--c[radix_digit(numbers[j], i)]] = numbers[j];
        }
        for (int j = 0; j < n; j++) {
            numbers[j] = b[j];
        }
    }
    
    return numbers;
}
