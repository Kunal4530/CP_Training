#include<bits/stdc++.h>
using namespace std;
void print(string f1,string f2,int i){
    
    if(i==f1.size()){
        cout <<"=>" + f2 << endl;
        return;
    }
    print(f1,f2+f1[i],i+1);
    print(f1,f2,i+1);
    print(f1,f2+to_string(int(f1[i])),i+1);


}
int main(){
    string s1 = "abc";
    string s2 = "" ;
    int i=0;
    print(s1,s2,i);
    return 0;
}

