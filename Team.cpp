/* Author:- ayushhhmeena
   CodeForces
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t,tp=0; cin>>t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;
        if(a&&b==1 || a&&c==1 || b&c==1){
            tp++;
        }
    }
    cout<<tp<<'\n';
    return 0;
}
