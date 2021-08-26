#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    if(k<a[n-1]){
        cout<<a[n-1]-k;
    }
    else {
    cout<<0;
    }
    return 0;
}
