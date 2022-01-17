#include <bits/stdc++.h>

using namespace std;

const int NMAX=105;

int n,a[NMAX],fr[NMAX];

int main(){
    cin>>n;
    int mx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        fr[a[i]]++;
        mx=max(mx,fr[a[i]]);
    }
    cout<<n-mx;
    return 0;    
}
