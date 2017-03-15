//
//  main.cpp
//  AlrorithmsTask3
//
//  Created by Ilya Kuteev on 14.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include <iostream>
#include <vector>
#include "RadixSort.hpp"


int mediana(int a, int b, int c)
{
    if (a > b) {
        if (c > a) return a;
        return (b > c) ? b : c;
    }
    
    if (c > b) return b;
    
    return (a > c) ? a : c;
}

void quickSort(int l, int r, std::vector<int> &array)
{
    int count = (int)array.size();
    
    int a = array[arc4random() % count];
    int b = array[arc4random() % count];
    int c = array[arc4random() % count];
    
    int x = mediana(a, b, c);
    int i = l;
    int j = r;

    while(i <= j)
    {
        while(array[i] < x) i++;
        while(array[j] > x) j--;
        if(i <= j)
        {
            std::swap(array[i], array[j]);
            i++;
            j--;
        }
    }
    
    if (i<r)
        quickSort(i, r, array);
    
    if (l<j)
        quickSort(l, j, array);
}

int main(int argc, const char * argv[])
{
    std::vector<int64_t> array;
    
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        array.push_back(a);
    }
    
    quickSort(array);
    
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    
    std::cout << std::endl;
    
    array.clear()
    
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        array.push_back(a);
    }
    
    array = radixSort(array);
    
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    
    std::cout << std::endl;
    
    quickSort(0, n-1, array);
    
    return 0;
}
