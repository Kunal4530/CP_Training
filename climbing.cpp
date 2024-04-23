#include<bits/stdc++.h>
using namespace std;
int jump(int n,int count){
        if(n==0){
            count = count +1;
            return count;
        }
        if(n<0){
            return count;
        }
        count = jump(n-1,count);
        count = jump(n-2,count);
    }
int main(){
    int n1=4;
    int count1 = 0;
    cout << jump(n1,count1);
}