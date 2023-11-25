/* Author:- ayushhhmeena
   CodeForces
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
void fnc(){
    int n,x; cin>>n>>x;
    vector<vector<int>> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        int tp; cin>>tp;
        a[i]={tp,i};
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    vector<int> ans(n);
    int tp1=0;
    for(int i=x-1;i>=0;i--){
        if(a[i][0]>b[tp1]){
            ans[a[i][1]]=b[tp1];
            tp1++;
        }else{
            cout<<"NO"<<'\n';
            return;
        }
    }
    tp1=n-1;
    for(int i=x;i<n;i++){
        if(a[i][0]>b[tp1]){
            cout<<"NO"<<'\n';
            return;
        }else{
            ans[a[i][1]]=b[tp1];
            tp1--;
        }
    }
    cout<<"YES"<<'\n';
    for(auto &i:ans){
        cout<<i<<" ";
    }
    cout<<'\n';
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
    while(t--){
        fnc();
    }
    return 0;
}
