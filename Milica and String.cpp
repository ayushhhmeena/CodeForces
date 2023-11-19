#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fnc(){
    ll n,k; 
    cin>>n>>k;
    string s; 
    cin>>s; 
    int tp1=0,tp2=0; 
    for(auto it:s){
        if(it=='A')tp1++; 
        if(it=='B')tp2++; 
    }
    int tp3=0; 
    if(tp2==k){
        cout<<tp3<<'\n'; 
        return; 
    }
    if(tp2>k){
        int tp4=tp2-k; 
        int i=0; 
        while(i<n){
            if(s[i]=='B')tp4--; 
            if(tp4==0){
                cout<<1<<'\n'; 
                cout<<i+1<<" "<<'A'<<'\n'; 
                return ; 
            }
            i++; 
        }
    }
    int tp4=k-tp2; 
    int i=0; 
    while(i<n){
        if(s[i]=='A')tp4--; 
        if(tp4==0){
            cout<<1<<'\n'; 
            cout<<i+1<<" B\n"; 
            return; 
        }
        i++; 
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        fnc();
    }
    return 0;
}
