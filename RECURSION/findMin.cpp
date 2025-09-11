#include<iostream>
#include<climits>
using namespace std;

void minInArray(int arr[], int index, int size, int& mini){

    if(index == size){
        return;
    }

    mini = min(mini,arr[index]);
    minInArray(arr, index+1, size, mini);
}

int main(){
    int arr[5] = {100,2,30,4,5};
    int index = 0;
    int size = 5;

    int mini = INT_MAX;
    minInArray(arr, index, size, mini);

    cout<<"minimum : "<<mini<<endl;
    return 0;
}