#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int s1,sum=0;
    cout << "Enter the size of vector-"<< endl;
    cin >> s1;
    for (int i = 0; i < s1; i++)
    {
        int num;
        cin >> num;
        v.emplace_back(num);
    }
    int max = INT_MIN;
    for (int i = 0; i < s1; i++)
    {
        sum+=v[i];
        if (sum>max){
            max=sum;
        }
        if (sum<0){
            sum=0;
        }
    }
    cout << max ;
    return 0;
    
}