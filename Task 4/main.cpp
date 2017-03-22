//
//  main.cpp
//  Task 4
//
//  Created by Ilya Kuteev on 22.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include <iostream>
#include <vector>


void bucketSort(std::vector<int> &vector)
{
    int m = 101;
    
    int buckets[m];

    for (int i = 0; i < m; ++i)
        buckets[i] = 0;
    
    for (int i = 0; i < vector.size(); ++i)
        ++buckets[vector[i]];
    
    for (int i = 0, j = 0; j < m; ++j)
        for (int k = buckets[j]; k > 0; --k)
            vector[i++] = j;
}

int main()
{
    std::vector<int> array;
    
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        array.push_back(a);
    }
    
    bucketSort(array);
    
    for(int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    
    return 0;
}
