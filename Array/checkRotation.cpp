#include<iostream>
#include<vector>
using namespace std;

void leftRotate(vector<int> &nums){
        for(int i=nums.size()-1; i>0; i--){
            swap(nums[i],nums[i-1]);
        }
    }

int main(){
    vector<int> nums = {1,2,3,4};
    leftRotate(nums);
    cout<<endl;
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}