
/* Author:- ayushhhmeena
   CodeForces
*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int tp1=1;
        ll ans=0;
        for(int i=0;i<n;i++){
            if(arr[i]>tp1){
                ans+=arr[i]-tp1;
                tp1=arr[i];
            }else{
                tp1=arr[i];
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
