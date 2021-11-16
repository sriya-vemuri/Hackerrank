#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,k,q;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    k=k%n;
    for(int i=0;i<q;i++){
        int qu;
        cin>>qu;
        cout<<a[(n-k+qu)%n]<<"\n";        
    }
    return 0;
}
