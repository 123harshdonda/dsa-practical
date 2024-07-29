

// marge sort

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int arr[100];
int temp[100];

void marge1(int lb, int mid, int ub)
{
    int left = lb;
    int right = mid + 1;
    int k = 0;
    while (left <= mid && right <= ub)
    {
        if (arr[left] < arr[right])
        {
            temp[k] = arr[left];
            k++;
            left++;
        }
        else
        {
            temp[k] = arr[right];
            k++;
            right++;
        }
    }
    while (left <= mid)
    {
        temp[k] = arr[left];
        k++;
        left++;
    }
    while (right <= ub)
    {
        temp[k] = arr[right];
        k++;
        right++;
    }

    int y = 0;
    for (int i = lb; i <= ub; i++)
    {
        arr[i] = temp[y];
        y++;
    }
}

void marge_sort(int lb, int ub)
{
    if (lb >= ub)
    {
        return;
    }
    int mid = (lb + ub) / 2;

    marge_sort(lb, mid);

    marge_sort(mid + 1, ub);

    marge1(lb, mid, ub);
}

void printArray(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// void copyArray(int lb,int ub){

//     printArray();
// }

int main()
{
    int n;
    cout << "Enter totale element of the array : ";
    cin >> n;
    arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i + 1 << "] : ";
        cin >> arr[i];
        cout << endl;
    }

    int lb = 0;
    int ub = n - 1;

    marge_sort(lb, ub);

    printArray(n);

    return 0;
}