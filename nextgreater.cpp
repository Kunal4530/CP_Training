#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> given = {1,3,4,2};
    vector <int> ans = {4,1,2};
    map<int,int> m;
    stack<int> s;
    for (int i = 0; i < given.size(); i++)
    {
        while(!s.empty() && given[s.top()]<given[i]){
            m[given[s.top()]] = given[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        m[given[s.top()]] = -1;
        s.pop();
    }
    for (int i = 0; i < ans.size(); i++)
    {
            ans[i] = m[ans[i]] ;
    }
    
    
    
}