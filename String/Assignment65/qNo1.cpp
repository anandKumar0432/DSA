// Finde minimum distance between two words in the given array

#include<iostream>
#include<string>
using namespace std;

int findWord(string str, string S[], int n){
    
    int i = 0;
    while(i<n){
        if(S[i] == str){
            return i;
        }
        i++;
    }
    return -1;
}

int main(){
    string S[] = {"the", "quick", "brown", "fox", "quick"};
    int n = sizeof(S)/sizeof(S[0]);
    string str1;
    string str2;
    cout<<"Enter the first string in order: ";
    cin>>str1;
    cout<<"Enter the second string in order: ";
    cin>>str2;
    cout <<endl;
    int n1 = findWord(str1, S, n);
    int n2 = findWord(str2 , S , n);
    cout<<"minimum distance is : "<<n2 - n1 - 1<<endl;
    return 0;
}