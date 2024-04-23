#include<bits/stdc++.h>
using namespace std;
string fun(char ch){
    vector<string> st = {"abc","def","ghi","jkl"};
    int n1 = ch - '0' ;
    return st[ch-2];
}
void print(string s,int idx,string s1){
    string s2 = fun();
    if(idx==s1.size()){
        cout << s1 << endl;
        return;
    }
    for (int i = idx; i < s1.size(); i++)
    {
        print(s,idx,s1,numpad);
    }
    cout << s2 << endl;

}

int main(){
    string input = "23";
    int index = 0;
    string empty = "";
    //vector<string> list;
    print(input,index,empty);
}