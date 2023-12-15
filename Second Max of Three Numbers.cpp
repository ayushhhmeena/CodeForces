/*
Author:- Ayush Meena
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll t; cin>>t;
    while(t--){
        ll arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        int n=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+n);
        cout<<arr[1]<<'\n';;
    }
    return 0;
}