#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void insertion_short(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        temp = arr[i];
        int j = (i - 1);
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
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
    insertion_short(arr, n);
    return 0;
}
