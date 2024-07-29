#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
using namespace std;

bool searchmatrix(vector<vector<int>> arr,int target){
    int row = arr.size();
    int col = arr[0].size();
    int rowindex = 0;
    int colindex = col-1;
    while(rowindex<row && colindex>=0){
        if(arr[rowindex][colindex]==target){
            return true;
        }
        else if(arr[rowindex][colindex]<target){
            rowindex++;
        }
        else{
            colindex--;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> arr={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int key = 5;
    bool result = searchmatrix(arr,key);
    if(result){
        cout<<"Element found in the matrix"<<endl;
    }else{
        cout<<"Element not found in the matrix"<<endl;
    }
    return 0;
}