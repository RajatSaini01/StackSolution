#include<bits/stdc++.h>
using namespace std;
void transfer(stack<int> &s1,stack<int> &s2,int n){
       for(int i=0;i<n;i++){
           s2.push(s1.top());
           s1.pop();
       }
}
void reversestack(stack<int> &s1){
    int n=s1.size();
    stack<int> s2;
    for(int i=0;i<n;i++){
        int x=s1.top();
        s1.pop();
        transfer(s1,s2,n-1-i);

        s1.push(x);

        transfer(s2,s1,n-1-i);
    }
}

int main(){
    
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    reversestack(st);
     
     while(!st.empty()){
         cout<<st.top()<<endl;
         st.pop();
     }
    return 0;
}