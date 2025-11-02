#include<iostream>
#include<vector>
using namespace std;
void printTripllet(const vector<int> & arr){
    vector<int>nums=arr;
    int n = nums.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                    continue;
                }
            for(int k=0;k<n;k++){
                 if(nums[j]==nums[k] || nums[i]==nums[k]){
                    continue;
                }
                cout<<"("<<nums[i]<<","<<nums[j]<<","<<nums[k]<<")";
            }
            cout<<endl;
        }
    }
}

int main(){

vector<int> nums;
nums.push_back(10);
nums.push_back(20);
nums.push_back(30);
printTripllet(nums);
    return 0;
}