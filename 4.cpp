#include<bits/stdc++.h>
using namespace std;
int main(){
    int maxx = INT_MIN;
    int i=0,j=0,sum=0;
    int k;
    cin >> k;
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.emplace_back(num);
    }
    
    while(j<n){
        sum+=v[j];
        if(j-i+1<k){
            j++;
        }
        else{
            maxx = max(sum,maxx);
            sum-=v[i];
            j++;
            i++;
        }
    }
    cout <<  maxx;
}