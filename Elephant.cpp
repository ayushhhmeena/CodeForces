#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,tp=0; cin>>n;
    if(n<6){
        cout<<"1";
    }else{
        cout<<(n+4)/5;
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
