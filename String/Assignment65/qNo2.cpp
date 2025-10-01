
//The task is to check if it is Pangram or not.
// A pangram is a sentence containing every letter in the English Alphabet.

#include<iostream>
#include<string>
#include <cctype>
using namespace std;

int  main(){
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    string str;
    cout<<"Enter the string : "
    cin>>str;
    for(char &c : str){
        c = tolower(c);
    }
    int n = sizeof(str)/sizeof(str[0]);
    for(int i = 0; i<n; i++){
        for(int j=0; j<26; j++){
            if(alpha[j] == str[i])
        }
    }
    return 0;
}