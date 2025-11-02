#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printAllPairs(const vector<int>& arr){
    // vector<int> nums=arr;
    int n=arr.size();

    // print al possible pairs
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // checking conditon
            if(arr[i]==arr[j]){
                continue;
            }
            cout<<"("<<arr[i]<<","<<arr[j]<<")";
            if(j!=n-1){
               cout<<",";
             }
        }
        cout<<endl;
    }
}

int main(){

    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);
    nums.push_back(40);
    int n=nums.size();
    printAllPairs(nums);


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<"("<<nums[i]<<","<<nums[j]<<")";
    //         if(j!=n-1){
    //            cout<<",";
    //          }
    //     }
    //     cout<<endl;
    // }
   
    //  for(int i=0;i<n;i++){
    //     cout<<nums[i];
    //     if(i!=n-1){
    //         cout<<",";
    //     }
    //  }




    return 0;
}