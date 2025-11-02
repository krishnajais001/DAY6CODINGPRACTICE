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
// nums.push_back(10);
// nums.push_back(20);
// nums.push_back(30);
// nums.push_back(40);
int size=4;
for(int i=0;i<size;i++){
    int value;
    cout<<"Enter index Value:";
    cin >>value;
    nums.push_back(value);
}
 printUniquePair(nums);


    return 0;
}