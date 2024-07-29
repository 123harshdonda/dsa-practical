#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void Selection_sorting(int arr[], int size)
{
    int min;
    for (int j = 0; j < (size - 1); j++)
    {
        min = j;
        for (int i = j + 1; i < (size); i++)
        {
            if (arr[min] > arr[i])
            {
                min = i;
            }
        }
        if (min != j)
            swap(arr[j], arr[min]);
    }


    cout << "Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    Selection_sorting(arr, n);
    return 0;
}