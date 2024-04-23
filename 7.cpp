#include<bits/stdc++.h>
using namespace std;
void print(string s1,int n1,int n2,int d1,int d2 ){
    
    if(n1==d1 && n2==d2){
        cout << s1 << endl;
        return;
    }
    else if(n1>d1 || n2>d2){
        return;
    }
    print(s1+"R",n1+1,n2,d1,d2);
    print(s1+"D",n1,n2+1,d1,d2);


}
int main(){
    string s = "";
    int i=0,j=0,k=2,l=2;
    print(s,i,j,k,l);
    return 0;
}

