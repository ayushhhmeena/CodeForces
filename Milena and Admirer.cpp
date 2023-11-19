#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll ans=0;
        int prv=arr[n-1];
        for(int i=n-2;i>=0;--i){
            if(arr[i]>prv){
                int tp1=(arr[i]+prv-1)/prv;
                ans+=tp1-1;
                prv=arr[i]/tp1;
            }else{
                prv=arr[i];
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
