#include<bits/stdc++.h>
using namespace std;
void print(stack<int>&b){
    if(b.empty()){
        return;
    }
    
    int v = b.top();
    b.pop();
    print(b);
    cout << v << endl;
    b.push(v);
  
   
}
int main(){
    stack<int> a;
    for (int i = 1; i < 6; i++)
    {
        a.push(i);
    }
    print(a);
    while(!a.empty()){
        cout << a.top() << " ";
        a.pop();
    }
}