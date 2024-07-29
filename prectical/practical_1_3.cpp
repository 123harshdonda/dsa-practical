#include <iostream>
#include <vector>
using namespace std;

vector<int> findduplicat(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > 1)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;

    // O(n):
    // int n = nums.size();
    // vector<int> ans;
    // sort(nums.begin(),nums.end());
    // for (int i = 0; i < n-1; i++)
    // {
    //     if(nums[i] == nums[i+1]){
    //         ans.push_back(nums[i]);
    //     }
    // }
    // return ans;
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

    vector<int> result = findduplicat(arr);

    if (!result.empty())
    {
        cout << "Duplicate number is : ";
        for (int i : result)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "No any element duplicate " << endl;
    }

    return 0;
}