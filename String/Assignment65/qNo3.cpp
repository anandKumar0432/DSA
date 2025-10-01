// Given two strings, the task is to find if a string can be obtained by rotating another string
// two places.

#include<iostream>
#include<string>
using namespace std;

void reverse(string &str, int start , int end){
    while(start < end){
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main(){
    int k;
    string str;
    cout<<"enter the string :";
    cin>>str;
    cout<<"enter the position : ";
    cin>>k;
    string str2;
    cout<<"enter the string that you want to compare : ";
    cin>>str2;
    // int n = sizeof(str) / sizeof(str[0]);
    int n = str.size();
    // cout<<"size is : "<<n<<endl;
    reverse(str, 0, k-1);
    // cout<<str<<endl;
    reverse(str, k, n-1);
    // cout<<str<<endl;
    reverse(str, 0, n-1);
    // cout<<str<<endl;
    if(str == str2){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
}