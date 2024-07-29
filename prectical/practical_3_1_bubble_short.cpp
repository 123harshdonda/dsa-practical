#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr2[], int s)
{
    cout << "Array : ";
    for (int i = 0; i < s; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}



void Bubble_short(int arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                swap(arr1[j], arr1[j + 1]);
            }
        }
    }
    printArray(arr1, size);
}


//Updeted Bubble short is used when user enterd array is alredy sorted so we not redqied full checkout all element.
//-->Updeted bubble short time complexsity is less.

void updated_Bubble_Short(int arr1[], int size){
    int flage = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                swap(arr1[j], arr1[j + 1]);
                flage=1;
            }
        }
        if(flage == 0){
            break;
        }
    }
    
    printArray(arr1, size);
}

int main()
{

    // cout << "Hello world" << endl;
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter [" << i + 1 << "] : ";
        cin >> arr[i];
    }

    Bubble_short(arr, n);
    updated_Bubble_Short(arr, n);

    return 0;
}