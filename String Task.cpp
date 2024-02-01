#include<bits/stdc++.h>
#define ll long long
using namespace std;
void soln(){
    char s;
    while(cin>>s){
        if(!strchr("AEIOUYaeiouy",s)){
            cout<<'.'<<(char)tolower(s);
        }
    }
}
int main(){
    ll t=1; 
    //cin>>t;
    while(t--){
        soln();
    }
    return 0;
}
