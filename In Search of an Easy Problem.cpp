#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n,h=0; cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            h++;
        }
    }
    if(h>0){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}
