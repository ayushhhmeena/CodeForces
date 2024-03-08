#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,k; cin>>n>>k;
    ll tp=k/(n-1);
    if((tp+k)%n==0){
        cout<<tp+k-1<<'\n';
    }else{
        cout<<tp+k<<'\n';
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
