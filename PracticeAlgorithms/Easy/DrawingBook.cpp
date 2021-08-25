#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    if((n-p)/2>p/2){
        
      cout<<(p/2);
    }
    
    else{
        if(n%2==0 && p==n-1 && n>2){
        cout<<1;
    }
       else cout<<(n-p)/2;
    }
    return 0;
}
