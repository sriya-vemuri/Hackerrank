#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n],e=100;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int flag=0,cur=0;
    while(true){
        cur+=k;
        cur%=n;
        if(a[cur]) e-=2;
        e--;
        if(cur==0) break;
    }
    /*for(int i=0;i<n;i++){
        i=i+k;
        if(i>=n){
            i=(i)%n+(k-1);
            if(i==0)
            flag=1;
        }
        
        
        if(flag==1){
            break;
        }
        e= e- a[i]*2 -1;
    }*/
    cout<<e;
}
