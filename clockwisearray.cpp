#include<bits/stdc++.h>
using namespace std;
// int main(){
//     vector<int> v = {1,2,3,4,5};
//     vector<int> v2(v.size(),0);
//     int id = 23%(v.size());
//     for (int i = 0; i < v.size(); i++)
//     {
//         v2[(i+id)%v.size()] = v[i];
//     }
//     for (int i = 0; i < v2.size(); i++)
//     {
//         cout << v2[i] ;
//     }
    
// }


/*optimal approach*/
int main(){
    vector<int> v = {1,2,3,5,4};
    int n = v.size();
    int rem = 27%n;
    reverse(v.begin(),v.end());
    reverse(v.begin()+rem,v.end());
    reverse(v.begin(),v.begin()+rem);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] ;
    }

}