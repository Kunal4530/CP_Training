#include<bits/stdc++.h>
using namespace std;
void jump(int n,string s){
    if(n<0){
        return;
    }
    if(n==0){
        cout << s << endl;
        return;
    }
    jump(n-1,s+"1");
    jump(n-2,s+"2");
    jump(n-3,s+"3");

}
int main(){
    string s1= "";
    int n1= 4;
    jump(n1,s1);

}