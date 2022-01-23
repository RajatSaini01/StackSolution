#include<bits/stdc++.h>
using namespace std;

class queue1{
public:
 stack<int> s1;
 stack<int> s2;

 void enqueue(int n){
     s1.push(n);
 }

 int dequeue(){
     if((s1.empty()) && (s2.empty())){
         cout<<"Queue is empty";
         exit(0);
     }
     if(s2.empty()){
         while(!s1.empty()){
               s2.push(s1.top());
               s1.pop();
         }

     }
     int x = s2.top();
     s2.pop();
 
return x;
 }
};



int main(){
queue1 q;
q.enqueue(3);
q.enqueue(4);
q.enqueue(67);
q.enqueue(343);
q.enqueue(78);

cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
    return 0;
}