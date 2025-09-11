#include<iostream>
#include<vector>
using namespace std;

vector<int> binarySearch(vector<int>& nums, int target , int start, int end){
        int tIndex = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(target == nums[mid]){
                tIndex = mid;
                mid = mid-1;
            }
            if(target < nums[mid]){
                end = mid-1;
            }
            if(target > nums[mid]){
                start = mid+1;
            }
        }
        int tIndex2 = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            if(target == nums[mid]){
                tIndex2 = mid;
                start = mid+1;
            }
            if(target < nums[mid]){
                end = mid-1;
            }
            if(target > nums[mid]){
                start = mid+1;
            }
        }
        return {tIndex, tIndex2};
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return binarySearch(nums, target, 0, nums.size()-1);
    }

int main(){
    vector<int> nums = {1,5,5,5,5,6,7};
    vector<int> result = searchRange(nums, 5);
    cout<<result[0]<<" "<<result[1];
    return 0;
}