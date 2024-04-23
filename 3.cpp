#include<bits/stdc++.h>
using namespace std;
int kd(vector<int> v1){
    int sum = 0;
    int max_so_far = INT_MIN;
    for (int i = 0; i < v1.size(); i++)
    {
        sum+=v1[i];
        if(sum>max_so_far){
            max_so_far = sum;
        }
        if(sum<0){
            sum =0;
        }
    }
    return max_so_far;
}
int kdr(vector<int> v2){
    int sum = INT_MAX;
    int min_so_far = INT_MAX;
    for (int i = 0; i < v2.size(); i++)
    {
        if(sum>0){
            sum = v2[i];
        }
        else{
            sum +=v2[i];
        }
        min_so_far = min(min_so_far,sum);
    }
    return min_so_far;
}
int main(){
    vector <int> v;
    int s1,ts=0;
    bool ch = true;
    cout << "Enter the size of vector-"<< endl;
    cin >> s1;
    for (int i = 0; i < s1; i++)
    {
        int num;
        cin >> num;
        if(num>0){
            ch = false;
        }
        ts+=abs(num);
        v.emplace_back(num);
    }
    int ans1 = kd(v);
    int ans2 = kdr(v);
    int ans = max(ans1,ts-abs(ans2));
    if(ch==true){
        cout << ans1 << endl;
    }
    else{
        cout << max(ans1,ans)<< endl;
    }
    
}
