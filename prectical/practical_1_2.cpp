#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateLeft(vector<int> arr1, int key)
{
    int n = arr1.size();
    int temp;
    for (int i = 0; i < key; i++)
    {
        temp = arr1[0];
        for (int j = 1; j < n; j++)
        {
            arr1[j - 1] = arr1[j];
            if (j == (n - 1))
            {
                arr1[j] = temp;
            }
        }
    }
    return arr1;
}

int main()
{
    int size;
    cout << "Enter total number of element : ";
    cin >> size;

    vector<int> arr;
    int temp;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter arr[" << i + 1 << "] : ";
        cin >> temp;
        arr.push_back(temp);
    }

    int key;
    cout << "Enter how many element you want to rotate : ";
    cin >> key;

    vector<int> result = rotateLeft(arr, key);

    for (int i : result)
    {
        cout << i << " ";
    }

    return 0;
}