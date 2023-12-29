#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,ei=0,oi=0,ee=0,oe=0,nm=0; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(i%2==0){
            ei++;
        }else{
            oi++;
        }
        if(arr[i]%2==0){
            ee++;
        }else{
            oe++;
        }
        if(i%2 != arr[i]%2){
            nm++;
        }
    }
    if(ei!=ee || oi!=oe){
        cout<<-1<<'\n';
        return;
    }
    cout<<nm/2<<'\n';
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
