#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


    void findPermutation(vector<vector<int>> &permut, vector<int> &nums2, 
                    vector<bool> &visited, vector<int> &temp){
        if(temp.size() == nums2.size()){
            permut.push_back(temp);
            return;
        }

        for(int i = 0; i<nums2.size(); i++){
            if(visited[i] == 0){
                visited[i] = 1;
                temp.push_back(nums2[i]);
                findPermutation(permut, nums2, visited, temp);
                temp.pop_back();
                visited[i] = 0;
            }
        }
    }
    vector<int> nextPermutation(vector<int>& nums) {
        vector<int> nums2 = nums;
        sort(nums2.begin(), nums2.end());
        vector<vector<int>> permut;
        vector<bool> visited(nums.size(), 0);
        vector<int> temp;
        findPermutation(permut, nums2, visited, temp);
        int index = -1;
        for(int i =0; i<permut.size(); i++){
            if(permut[i] == nums){
                index = i;
                break;
            }
        }
        if(index == permut.size()-1){
            return permut[0];
        }else{
            return permut[index+1];
        }
    }


int main(){
    vector<int> nums = {1,5,1};
    vector<int> result;
    result = nextPermutation(nums);

    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}