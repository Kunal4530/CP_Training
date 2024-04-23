#include<bits/stdc++.h>
using namespace std;
void par(string s,int o,int c){
    // cout<<s<<endl;
    if(o==0 && c==0){
        // cout<<"yes";
        cout << s << endl;
        return;
    }
    if(c<o){
        return;
    }
    if(o<0){
        return;
    }
    par(s+"(",o-1,c);
    par(s+")",o,c-1);
}
int main(){
    int num = 2;
    int o=2,c=2;
    string s1 = "";
    par(s1,o,c);

}