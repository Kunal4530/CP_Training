#include<bits/stdc++.h>
using namespace std;
void jump(int n,string s,int c){
    if(n<0){
        return;
    }
    if(n==0){
        cout << s << endl;
        return;
    }
    if (c!=2 && c!=3) jump(n-1,s+"1",1);
    if (c!=3) jump(n-2,s+"2",2);
    jump(n-3,s+"3",3);
}
int main(){
    string s1= "";
    int n1= 99;
    int ch = 0;
    jump(n1,s1,ch);

}