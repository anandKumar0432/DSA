#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &nums, int start, int end, int target){

    int mid = (start + end)/2;
    if(start > end){
        return -1;
    }

    if(target == nums[mid]){
        return mid;
    }
    if(target < nums[mid]){
        end = mid-1;
        return binarySearch(nums, start, end, target);
    }

    if(target > nums[mid]){
        start = mid+1;
        return binarySearch(nums, start, end, target);
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int result = binarySearch(nums, 0, 5,4);
    cout<<"find : "<<result<<endl;
    return 0;
}