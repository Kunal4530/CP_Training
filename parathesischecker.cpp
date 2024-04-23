#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "(())((";
    stack<char> a;
    int c = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]=='('){
            a.push(s[i]);
        }
        else if(!a.empty()){
            a.pop();
            c++;
        }
        
    }
    cout << c;
    
}