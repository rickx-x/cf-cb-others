/**
 * @file Arrays_SumOfTwoArrays.cpp          
 * @author rithesh
 * @brief 
 * 
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

Input Format
Constraints
Length of Array should be between 1 and 1000.

Output Format
Sample Input
4
1 0 2 9
5
3 4 5 6 7


Sample Output
3, 5, 5, 9, 6, END


Explanation
Sum of [1, 0, 2, 9] and [3, 4, 5, 6, 7] is [3, 5, 5, 9, 6] and the first digit represents carry over , if any (0 here ) .
 * @date 2022-05-27
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size_1;
    cin >> size_1;
    int arr_1[1000];
    for (int i = 0; i < size_1; i++)
    {
        cin >> arr_1[i];
    }
    int size_2;
    cin >> size_2;
    int arr_2[1000];
    for (int i = 0; i < size_2; i++)
    {
        cin >> arr_2[i];
    }
    int diff = 0;
    if (size_2 > size_1)
    {
        diff = size_2 - size_1;
        while (diff--)
        {
            for (int i = size_1 - 1; i >= 0; i--)
            {
                arr_1[i + 1] = arr_1[i];
            }
            arr_1[0] = 0;
            size_1++;
        }
        size_1 = size_2;
    }
    else
    {
        diff = size_1 - size_2;
        while (diff--)
        {
            for (int i = size_2 - 1; i >= 0; i--)
            {
                arr_2[i + 1] = arr_2[i];
            }
            arr_2[0] = 0;
            size_2++;
        }
        size_2 = size_1;
    }
    int n = size_1;
    int new_array[size_1];
    int temp = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int res = 0;
        res = arr_1[i] + arr_2[i] + temp;
        temp = res % 10;
        if (res == 10)
        {
            new_array[i] = 0;
            temp = 1;
            continue;
        }
        if (temp)
        {
            new_array[i] = temp;
            res /= 10;
            temp = res;
        }
        else
        {
            new_array[i] = res;
        }
    }
    if (temp)
        cout << temp << ", ";
    for (int i = 0; i < n; i++)
    {
        cout << new_array[i] << ", ";
    }
    cout << "END";
    return 0;
}