#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        vector<int> ans;
        int j = 0;
        int size = arr.size();
        for (int i = 1; i < 1000; i++)
        {
            if (arr[j] == i )
            {
                  j++;
            }
            else
            {
              
                ans.push_back(i);
            }
        }
        return ans[k - 1];
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,3,4};
    int k = 2;
    int result = s.findKthPositive(arr,k);
    cout <<"2nd missing number is : " << result <<endl;
    

    return 0;
}


// chat gpt :


// class Solution
// {
// public:
//     int findKthPositive(vector<int> &arr, int k)
//     {
//         int missingCount = 0; // Counter for missing positive integers
//         int current = 1; // Current positive integer to check
//         int index = 0; // Index to traverse the array

//         // Iterate until we've found the k-th missing positive integer
//         while (missingCount < k)
//         {
//             // If the current number matches the element in the array, move to the next element in the array
//             if (index < arr.size() && arr[index] == current)
//             {
//                 index++;
//             }
//             else
//             {
//                 // Current number is missing
//                 missingCount++;
                
//                 // If we have found the k-th missing number, return it
//                 if (missingCount == k)
//                 {
//                     return current;
//                 }
//             }
//             current++;
//         }

//         // Should never reach here if k is valid
//         return -1; 
//     }
// };
