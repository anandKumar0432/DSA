#include<iostream>
#include<vector>
using namespace std;

class Sum{
    public: 
    vector<int> twoSum(int arr[], int size, int target){
        vector<int> v;
        for(int i = 0; i<size-1; i++){
            for(int j = i+1; j<size; j++){
                if(arr[i] + arr[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};

int main(){
    vector<int> v;
    int size;
    int target;
    cout<<"enter the size : ";
    cin>>size;
    int arr[size];
    cout<<"enter the element : ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"enter target : ";
    cin>>target;

    Sum s;
    v = s.twoSum(arr,size,target);
    for(auto it : v){
        cout<<it<<" ";
    }

    return 0;
}