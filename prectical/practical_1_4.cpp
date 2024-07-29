#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> nonRepert(int arr1[], int size)
{
    vector<int> ans;
    bool count;
    sort(arr1, arr1 + size);

    for (int i = 0; i < size; i++)
    {
        count = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr1[i] == arr1[j])
            {
                count = false;
                break;
            }
        }
        if (count)
        {
            ans.push_back(arr1[i]);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter total number of element : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter [" << i + 1 << "] : ";
        cin >> arr[i];
    }
    vector<int> result = nonRepert(arr, n);

    if (!result.empty())
    {
        for (int i : result)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "All element is repeted " << endl;
    }
    return 0;
}