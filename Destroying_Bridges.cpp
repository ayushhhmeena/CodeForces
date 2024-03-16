#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n,k; cin>>n>>k;
    if(k>=(n-1)){
        cout<<"1\n";
    }else{
        cout<<n<<'\n';
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
