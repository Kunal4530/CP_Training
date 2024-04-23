#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1,v2,v3;
    int s1,s2;
    cout << "Enter the size of 1st vector-"<< endl;
    cin >> s1;
    cout << "Enter the size of 2nd vector-"<< endl;
    cin >> s2;
    for (int i = 0; i < s1; i++)
    {
        int num;
        cin >> num;
        v1.emplace_back(num);
    }
    for (int i = 0; i < s2; i++)
    {
        int nm;
        cin >> nm;
        v2.emplace_back(nm);
    }
    int p1=0;
    int p2=0;
    while(p1<v1.size() && p2<v2.size()){
        if(v1[p1]<v2[p2]){
            p1++;
        }
        else if(v1[p1]>v2[p2]){
            p2++;
        }
        else{
            v3.emplace_back(v1[p1]);
            p1++;
            p2++;
        }

    }
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    
    return 0;    
}