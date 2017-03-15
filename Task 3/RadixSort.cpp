//
//  RadixSort.cpp
//  AlrorithmsTask3
//
//  Created by Ilya Kuteev on 14.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include "RadixSort.hpp"

int64_t readix_digit(int64_t num, int64_t pos)
{
    int64_t mask = 1;
    mask <<= pos;
    return num & mask;
}

void radix_sort(std::vector<int64_t> numbers)
{
    int n = (int)numbers.size();
    int k = 64;
    
    std::vector<int64_t> C;
    std::vector<int64_t> B;
    
    for (int i = 0; i < n; i++) {
        C.push_back(0);
        B.push_back(0);
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k-1; j++) {
            for (int j = 0; j < n-1; j++) {
                int64_t d = readix_digit(numbers[j], i);
                C[d]++;
                int count = 0;
                for (int j = 0; j < k-1; j++) {
                    int64_t temp = C[j];
                    C[j] = count;
                    count += temp;
                    for (int j = 0; j < n-1; j++) {
                        int64_t d = readix_digit(numbers[j], i);
                        B[C[d]] = numbers[j];
                        C[d]++;
                        for (int i = 0; i < n; i++) {
                            numbers[i] = B[j];
                        }
                    }
                }
            }
        }
    }
    
    
//    function radixSort(int[] A):
//    for i = 1 to m
//        for j = 0 to k - 1
//            C[j] = 0
//            for j = 0 to n - 1
//                d = digit(A[j], i)
//                C[d]++
//                count = 0
//                for j = 0 to k - 1
//                    tmp = C[j]
//                    C[j] = count
//                    count += tmp
//                    for j = 0 to n - 1
//                        d = digit(A[j], i)
//                        B[C[d]] = A[j]
//                        C[d]++
//                        A = B
}
