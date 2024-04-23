#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> given = {1,1,4,2,5,8,2};
    vector <int> ans(given.size());
    stack<int> s;
    for (int i = 0; i < given.size(); i++)
    {
        while(!s.empty() && given[s.top()]<given[i]){
            ans[s.top()] = given[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        ans[s.top()] = -1;
        s.pop();
    }
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " " ;
    }
    
}