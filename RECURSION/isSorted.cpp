#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> &nums ,int index){
    if(index == nums.size()){
        return false;
    }

    if(nums[index] <= nums[index+1]){
        isSorted(nums, index+1);
    }
}

int main(){

    return 0;
}