#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    ll tp=3;
    while(tp--){
        string arr; cin>>arr;
        ll a=0,b=0,c=0;
        for(int i=0;i<3;i++){
            if(arr[i]=='A'){
                a++;
            }else if(arr[i]=='B'){
                b++;
            }else if(arr[i]=='C'){
                c++;
            }
        }
        if(a>0 && b>0 && c==0){
            cout<<"C"<<'\n';
        }else if(a>0 && c>0 && b==0){
            cout<<"B"<<'\n';
        }else if(b>0 && c>0 && a==0){
            cout<<"A"<<'\n';
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
