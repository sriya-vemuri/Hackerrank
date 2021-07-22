#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int s=0;
    vector<int> a;
    for(int i=0;i<5;i++){
        cin>>n;
        s+=n;
        a.push_back(n);
    }
    sort(a.begin(),a.end());
    cout<<s-a[4]<<" "<<s-a[0];
    return 0;
}
