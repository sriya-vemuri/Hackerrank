#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int a,b,s,t,m,n,i;
    long long int c=0,d=0;
    long long int no;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for(i=0;i<m;i++){
        cin>>no;
        if(no+a<=t && no+a >= s)
        c++;
    }
    for(i=0;i<n;i++){
        cin>>no;
        if(no+b<=t && no+b >=s)
        d++;
        
    }
    cout<<c<<"\n"<<d;
    return 0;
}
