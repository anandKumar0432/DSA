#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int> &dp){
    if(n<=1) return dp[n]=n;

    if(dp[n] != -1) return dp[n];

    dp[n] = fib(n-1, dp) + fib(n-2, dp);

    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1, -1);
    fib(n, dp);

    for(auto x: dp){
        cout<<x<<" ";
    }
    
    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;

// int fib(int n, vector<int> &dp){
//     if(n <= 1) return dp[n] = n;

//     if(dp[n] != -1) return dp[n];

//     dp[n] = fib(n-1, dp) + fib(n-2, dp);

//     return dp[n];
// }

// int main(){
//     int n;
//     cin >> n;

//     vector<int> dp(n+1, -1);
//     fib(n, dp);

//     for(auto x : dp){
//         cout << x << " ";
//     }

//     return 0;
// }