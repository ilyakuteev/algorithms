//
//  main.cpp
//  AlrorithmsTask3
//
//  Created by Ilya Kuteev on 14.03.17.
//  Copyright © 2017 Ilya Kuteev. All rights reserved.
//

#include <iostream>
#include <vector>

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
    int a = array[l];
    int b = array[(l + r) / 2];
    int c = array[r];
    
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
    std::vector<int> array;
    
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        array.push_back(a);
    }
    
    quickSort(0, n-1, array);
    
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
    
    return 0;
}

void quickSort()
{
    
}

int med (int a, int b, int c)
{
    if (a > b) { // ba ?c
        if (c > a) // bac
            return a;
        return (b > c) ? b : c;
    }
    // ab ? c
    if (c > b) // abc
        return b;
    return (a > c) ? a : c;
}
