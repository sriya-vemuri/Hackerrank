#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,val;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>val;
        a.push_back(val);
    }
    sort(a.begin(),a.end());
    long long int s=1;
    for(int i=n-2;i>=0;i--){
        if(a[i]==a[n-1])
        s++;
    }    
    cout<<s;
    return 0;
}
