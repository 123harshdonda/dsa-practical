#include <iostream>
#include <vector>
using namespace std;

int LinearSearch(int arr[], int n, int target)
{
    cout << "\nUsing simpal Function ." << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return 0;
}

int RecursivLinearSearch(int arr[], int n, int target, int i)
{
   
    if (i <= n)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    else
    {
        return 0;
    }
    RecursivLinearSearch(arr, n, target, i + 1);
}

int main()
{
    int size;
    cout << "Enter the total number of element : ";
    cin >> size;
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter [" << i + 1 << "] : ";
        cin >> arr1[i];
    }

    int key;
    cout << "Enter number for Linear Search : ";
    cin >> key;

    // int result = LinearSearch(arr1, size, key);

     cout << "\nUsing Recursive Function ." << endl;
    int result = RecursivLinearSearch(arr1, size, key, 0);

    if (result)
    {
        cout << key << " is at index : " << result << endl;
    }
    else
    {
        cout << key << " is not in this Array. " << endl;
    }

    return 0;
}