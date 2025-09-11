#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(12);
    st.push(12);
    st.push(2);
    st.push(12);
    st.push(92);
    st.push(102);
    st.push(120);
    int top = st.top();
    cout<<"top ; "<<top<<endl;
    cout<<"size : "<<st.size()<<endl;
}