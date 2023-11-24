/* Author:- ayushhhmeena
   CodeForces
*/
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n,x; cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=max(arr[0],(x-arr.back())*2);
        arr.push_back(x);
        for(int i=1;i<=n;i++){
            ans=max(ans,arr[i]-arr[i-1]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
