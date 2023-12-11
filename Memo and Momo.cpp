/* 
Author:- Ayush Meena
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll a,b,k; cin>>a>>b>>k;
    if(a%k==0 && b%k==0){
        cout<<"Both";
    }else if(a%k==0 && b%k!=0){
        cout<<"Memo";
    }else if(b%k==0 && a%k!=0){
        cout<<"Momo";
    }else if(a%k!=0 && b%k!=0){
        cout<<"No One";
    }
    return 0;
}
