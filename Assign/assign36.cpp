#include<iostream>
#include<array>
#include<iterator>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
    array<int,7>ar = {1,3,2,5,3,56,7};
    
    sort(ar.begin(), ar.end());
    array<int,7>::iterator it;

    for(it = ar.begin(); it != ar.end(); it++){
        cout<<*it<<" ";
    }
    
    cout<<endl;

    int s = ar.size();
    int product = accumulate(ar.begin(), ar.end(), 1LL, multiplies<long long>());
    cout<<"product : "<<product<<endl;

    return 0;
}