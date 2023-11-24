/* Author:- ayushhhmeena
   CodeForces
*/
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t; cin>>t;
    while(t--){
        int n,tp1=0; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            tp1=max(tp1,arr[i]);
        }
        vector<int> ans;
        while(tp1){
            int flg=1;
            for(int i=1;i<n;i++){
                if(arr[i]!=arr[i-1])flg=0;
            }
            if(flg){
                break;
            }
            int tp2=(tp1%2==0);
            for(int i=0;i<n;i++){
                arr[i]=(arr[i]+tp2)/2;
            }
            tp1=(tp1+tp2)/2;
            ans.push_back(tp2);
        }
        cout<<(int)ans.size()<<'\n';
        if(ans.size()<=n){
            for(auto it:ans){
                cout<<it<<" "; 
            }
        }
        cout<<'\n';
    }
    return 0;
}
