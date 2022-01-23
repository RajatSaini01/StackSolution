#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> st;
    string str="(())";
    for(int i=0;i<str.size();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            st.push(str[i]);
        }

        else if(str[i]==')' && !st.empty()){
            if(st.top()=='('){
                 st.pop();
            }
            else{
                cout<<"Parentheses not Matched"<<endl;
            }
        }
        else if(str[i]=='}' && !st.empty()){
            if(st.top()=='{'){
                 st.pop();
            }
            else{
                cout<<"Parentheses not Matched"<<endl;
            }
        }
        else if(str[i]==']' && !st.empty()){
            if(st.top()=='['){
                 st.pop();
            }
            else{
                cout<<"Parentheses not Matched"<<endl;
            }
        }
       
        
    }
     if(st.empty()){
            cout<<"Parentheses is Matched"<<endl;
        }
        else{
            cout<<"Parentheses is not Matched";
        }
    
    return 0;
}