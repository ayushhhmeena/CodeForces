/* 
Author:- Ayush Meena
*/
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a,b; cin>>a>>b;
    if(a%b==0 || b%a==0){
        cout<<"Multiples";
    }else{
        cout<<"No Multiples";
    }
    return 0;
}
