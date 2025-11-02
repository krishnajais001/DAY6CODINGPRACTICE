#include<iostream>
#include<vector>

using namespace std;

void printUniquePair(const vector<int> & arr){
    // copy of vector
    vector<int>nums=arr;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                continue;
            }
            cout<<"("<<nums[i]<<","<<nums[j]<<")";
        }
        cout<<endl;
    }

}


int main(){
vector <int> nums;
nums.push_back(10);
nums.push_back(20);
nums.push_back(30);
nums.push_back(40);
 printUniquePair(nums);


    return 0;
}