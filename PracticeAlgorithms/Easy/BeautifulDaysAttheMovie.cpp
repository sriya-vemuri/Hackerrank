#include <bits/stdc++.h>

using namespace std;

int re(int i){
    int d=0;
    while(i!=0){
        d= d*10 + i%10;
        i=i/10;
    }
    return d;
}

int main(){
    int l,r,k,ct=0;
    cin>>l>>r>>k;
    for(int i=l;i<=r;i++){
        if(abs(i-re(i))%k==0){
            ct++;
        }
    }
    cout<<ct;
}
