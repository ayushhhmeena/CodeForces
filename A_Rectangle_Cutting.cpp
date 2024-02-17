#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll a,b; cin>>a>>b;
    if(a%2!=0 && b%2!=0){
        cout<<"No\n";
    }else if(a%2==0 && b%2==0){
        cout<<"Yes\n";
    }else{
        ll tp1=0,tp2=0;
        if(a%2==0){
            tp1=a;
            tp2=b;
        }else{
            tp1=b;
            tp2=a;
        }
        //ll tp1=a%2==0?a:b;
        //ll tp2=a%2==0?b:a;
        //cout<<'\n'<<"tp1: "<<tp1<<" tp2: "<<tp2<<'\n';
        tp1/=2;
        if(tp1==tp2){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
        //cout<<'\n';
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