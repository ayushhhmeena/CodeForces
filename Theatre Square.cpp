#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,m,a; cin>>n>>m>>a;
    cout<<((n/a)+(n%a!=0))*((m/a)+(m%a!=0));
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
