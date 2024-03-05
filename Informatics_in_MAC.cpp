#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll n; cin>>n;
    ll arr[n];
    unordered_map<ll,ll>uom;
    for(ll i=0;i<n;++i){
        cin>>arr[i];
        uom[arr[i]]++;
    }
    ll j=0;
    set<ll>s,s1;
    while(uom[j]>=2){
        s.insert(j);
        s1.insert(j);
        j++;
    }
    if(uom[j]>0){
        cout<<"-1\n";
    }else{
        ll tmp=0;
        for(ll i=0;i<n;++i){
            if(s.find(arr[i])!=s.end()){
                s.erase(arr[i]);
            }
            if(s.size()==0){
                tmp=i+1;
                break;
            }
        }
        for(ll i=tmp;i<n;++i){
            if(s1.find(arr[i])!=s1.end()){
                s1.erase(arr[i]);
            }
        }
        if(s1.size()==0){
            cout<<"2\n";
            cout<<"1"<<" "<<tmp<<'\n';
            cout<<tmp+1<<" "<<n<<'\n';
        }else{
            cout<<"-1"<<'\n';
        }
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