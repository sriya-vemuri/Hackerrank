#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int i,c=0,a;
        for(i=0;i<n;i++){
            cin>>a;
            if(a<=0)
            c++;
        }
        if(c>=k){
            cout<<"NO\n";
        }
        else {
        cout<<"YES\n";
        }
    }
    return 0;
}
