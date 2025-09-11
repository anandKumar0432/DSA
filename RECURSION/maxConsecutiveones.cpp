#include<iostream>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int i = 0;
        int localMax = 1;
        int n = nums.size();
        while(i < n){
            if(nums[i] == 1 && nums[i+1] == 1){
                localMax += 1;
                if(localMax > max){
                    max = localMax;
                }
            }
            if(nums[i] != 1){
                localMax = 1;
            }
            i++;
        }
        return max;
    }
int main(){
    vector<int> nums = {1,1,0,1,1,1};
    int result;
    result = findMaxConsecutiveOnes(nums);
    cout<<"result : "<<result<<endl;
    return 0;
}