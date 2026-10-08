#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll n){

    for(int i=1; i<n; i++){
        if(i%3==0 && i%5==0){
            cout<<"FIZZBUZZ"<<endl;
        }else if(i%3==0){
            cout<<"FIZZ"<<endl;
        }else if(i%5==0){
            cout<<"BUZZ"<<endl;
        }else{
            cout<<i<<endl;
            
        }
    }
}

int main(){

    ll n=0;
    cin>>n;

    solve(n);

    return 0;
}