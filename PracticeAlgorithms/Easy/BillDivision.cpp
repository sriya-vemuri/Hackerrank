#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int i, a[n];
    int ba=0,bc;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i!=k){
            ba = ba + a[i];
        }
    }
    ba = ba/2;
    cin>>bc;
    if(bc==ba){
        cout<<"Bon Appetit";
    }
    else {
    cout<<bc-ba;
    }
    return 0;
    
}
