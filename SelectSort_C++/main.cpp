//
//  main.cpp
//  SelectSort_C++
//
//  Created by chenyufeng on 9/25/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 *  选择排序时间复杂度O(n^2),空间复杂度O(1),是不稳定的；
 */

void SelectSort(vector<int> &vec);

int main(int argc, const char * argv[])
{
    int arr[] = {4,1,2,8,9,0};
    vector<int>vectorArray(arr, arr + sizeof(arr) / sizeof(int));

    SelectSort(vectorArray);
    vector<int>::iterator vectorIte;
    for (vectorIte = vectorArray.begin(); vectorIte != vectorArray.end(); vectorIte++)
    {
        cout << *vectorIte << " ";
    }

    return 0;
}

void SelectSort(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        int m = vec[i]; // 假定是最小的
        int index = i; // 记录下标值

        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] < m)
            {
                index = j;
            }
        }

        swap(vec[i], vec[index]); // STL已经实现swap方法
    }
}
















