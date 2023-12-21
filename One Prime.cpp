#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n,no=0; cin>>n;
    for(ll i=2;i<n;i++){
        if(n%i==0){
            no++;
        }
    }
    if(no>0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}
