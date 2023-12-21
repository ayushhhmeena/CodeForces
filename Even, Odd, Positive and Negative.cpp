#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n,e=0,o=0,p=0,ne=0; cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            e++;
        }else{
            o++;
        }
        if(arr[i]>0){
            p++;
        }else if(arr[i]<0){
            ne++;
        }
    }
    cout<<"Even: "<<e<<'\n'<<"Odd: "<<o<<'\n'<<"Positive: "<<p<<'\n'<<"Negative: "<<ne;
    return 0;
}
