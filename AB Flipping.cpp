/* Author:- ayushhhmeena
   CodeForces
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int t; cin>>t;
    while (t--){
        int n, tp1=0,tp2=0; cin>>n;
        string s; cin>>s;
        s=" "+s;
        for(int i=n;i>=1;i--){
            if(s[i] == 'A'){
                tp2+=tp1;
                tp1=(tp1==0?0:1);
            }else{
                tp1++;
            }
        }
        cout<<tp2<<'\n';
    }
    return 0;
}
