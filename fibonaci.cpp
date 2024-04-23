#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else {
        int s1 = fib(n-1);
        int s2 = fib(n-1);
        return s1+s2;
    }
    
}

int memo(int n,vector<int> dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    else {
        int s1 = memo(n-1,dp);
        int s2 = memo(n-2,dp);
        dp[n] = s1 + s2;
        return s1+s2;
    }
    
}
int main(){
    int n;
    cin >>  n;
    vector<int> d(n+10);
    cout << memo(n,d);
}