#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &vt,int idx){
    int temp;
    int i = 0;
    while((idx+i)<(vt.size()-1-i)){
        temp = vt[idx+i];
        vt[idx+i] = vt[vt.size()-1-i];
        vt[vt.size()-1-i] = temp;
        i++;
    }
}
int main(){
    vector<int> v = {2,3,1};
    bool t = true;
    int k;
    int temp;
    for (int i = v.size()-1; i>0; i--)
    {
        if(v[i]>v[i-1]){
            k = i-1;
            t = false;
            break;

        }    
    }
    for (int j = v.size()-1; j>k; j--)
    {
        if (v[k] < v[j]){
            temp = v[k];
            v[k] = v[j];
            v[j]  =temp;
            break;
        }
    }
    
    if(t){
        swap(v,0);
    }
    else{
        swap(v,k+1);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }
    
    
}