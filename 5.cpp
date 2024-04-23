#include<bits/stdc++.h>
using namespace std;
void print(int f,int l){
    if (f>l){
        return;
    }
    cout << l << endl;
    print(f,l-1);
    cout << l << endl;



}
int main(){
    int s=1,e=5;
    print(s,e);
}
