#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,m,a,b; cin>>n>>m>>a>>b;
    cout<<min(n*a,(n/m)*b+min((n%m)*a,b));
}
int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
