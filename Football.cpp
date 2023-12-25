#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    string s;
    cin>>s;
    int len=s.length();
    string str1="1111111",str2="0000000";
    size_t found1 = s.find(str1);
    size_t found2 = s.find(str2);
    if (found1 != string::npos || found2 != string::npos){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main(){
    //ll t; cin>>t;
    //while(t--){
        soln();
    //}
    return 0;
}
