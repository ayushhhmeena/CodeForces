/* 
Author:- Ayush Meena
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll a,b;
    char s;
    cin>>a>>s>>b;
    if(s == '<'){
        if(a<b){
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }else if(s == '>'){
        if(a>b){
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }else if(s=='='){
        if(a==b){
            cout<<"Right";
        }else{
            cout<<"Wrong";
        }
    }
    return 0;
}
