#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,tp=0; cin>>n;
    while(n--){
        string s,s1="++X",s2="X++",m1="--X",m2="X--"; cin>>s;
        if(s==s1){
            ++tp;
        }
        if(s==s2){
            tp++;
        }
        if(s==m1){
            --tp;
        }
        if(s==m2){
            tp--;
        }
    }
    cout<<tp;
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
