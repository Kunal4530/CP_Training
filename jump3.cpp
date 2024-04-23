#include<bits/stdc++.h>
using namespace std;
void jump(int n,string s,int idx,vector<int> &a){
    if(n<0){
        return;
    }
    if(n==0){
        cout << s << endl;
        return;
    }
    for (int i = idx; i < a.size(); i++)
    {
        jump(n-a[i],s+to_string(a[i]),i,a);
    }

}
int main(){
    string s1= "";
    int n1= 4;
    int id = 0;
    vector<int> a = {1,2,3};
    jump(n1,s1,id,a);

}

// #include<bits/stdc++.h>
// using namespace std;

// void findUniqueJump(int n , vector<int> &steps , int idx , string path)
// {
//     if(n==0) {
//         cout<<path<<endl;
//         return;
//     }
//     for(int i=idx;i<steps.size();i++){
//         if(n-steps[i]>0) findUniqueJump(n-steps[i],steps,i,path+" "+steps[i]);
//     }
// }
// int main(){
//     vector<int> arr={1,2,3};
//     int start =5;
//     int idx =0;
//     findUniqueJump(start,arr,idx,"");
//     return 0;
// }