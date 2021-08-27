#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long int l=0,r=5;
    int p=0;
    for(int i=0;i<n;i++){
        p =(r/2);
        l=p+l;
        r=p*3;
    }
    cout<<l;
    return 0;
}
