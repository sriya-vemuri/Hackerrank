#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,d,m,i;
    int a[n];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    cin>>d>>m;
    int j=0,ans=0;
    while(j<=n-m){
        int sum=0;
        int k=j;
        for(i=0;i<m;i++){
            sum = sum + a[k];
            k++;
        }
        if(sum==d){
            ans++;
        }
        j++;
        
    }
    cout<<ans;
    return 0;
}
