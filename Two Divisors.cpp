#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b){  
    if(b==0){
        return a;
    }  
    return gcd(b,a%b); 
} 
void soln(){
    ll a,b; cin>>a>>b;
    ll lcm=(a*b)/gcd(a,b);
    if(lcm==b){
        cout<<lcm*(b/a)<<'\n';
    }else{
        cout<<lcm<<'\n';
    }
}
int main(){
    ll t=1; 
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
