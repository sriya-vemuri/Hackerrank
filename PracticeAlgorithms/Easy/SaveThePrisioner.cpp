#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,s,l;
        cin>>n>>m>>s;
        cout<<((m+s-2)%n)+1<<"\n";
    }
    return 0;
}
