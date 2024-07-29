#include <iostream>
using namespace std;

int Binary_Search(int arr1[], int size, int target)
{
    int ub = size - 1;
    int lb = 0;
    int mid;
    while (ub >= lb)
    {
        mid = (ub + lb) / 2;
        if (arr1[mid] == target)
        {
            return mid;
        }
        else if (arr1[mid] > target)
        {
            ub = mid - 1;
        }
        else if (arr1[mid] < target)
        {
            lb = mid + 1;
        }
    }
    return -1;
}

int recuresive(int arr2[], int ub, int lb, int target)
{

    int mid = (ub + lb) / 2;
    if (lb > ub)
    {
        return -1;
    }
    if (arr2[mid] == target)
    {
        return mid;
    }
    else if (arr2[mid] > target)
    {
        return recuresive(arr2, mid - 1, lb, target);
    }
    else if (arr2[mid] < target)
    {
        return recuresive(arr2, ub, mid + 1, target);
    }
}

int main()
{
    int n;
    cout << "Enter total number of element : ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter  [" << i + 1 << "] : ";
        cin >> arr[i];
    }

    int data;
    cout << "Enter your target : ";
    cin >> data;
    int result = Binary_Search(arr, n, data);

    // for Recursion :

    int lb = 0;
    int ub = n - 1;
    // int result = recuresive(arr, ub, lb, data);

    if (result == -1)
        cout << data << " is not in this array" << endl;
    else
        cout << data << " is at index : " << result << endl;
    return 0;
}
