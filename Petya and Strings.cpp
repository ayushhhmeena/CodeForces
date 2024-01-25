#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    string s1,s2; cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    if(s1<s2){
        cout<<"-1";
    }else if(s1>s2){
        cout<<'1';
    }else{
        cout<<"0";
    }
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
