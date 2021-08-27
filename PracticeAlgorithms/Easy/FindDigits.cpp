#include <bits/stdc++.h>

using namespace std;

int fun(int n){
    int num,ct=0,d;
    num=n;
    while(n>0){   //> only dont put =
            if(n%10!=0 && num %(n%10)==0){
                ct++;
            }
            n=n/10;
    }
    return ct;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,num,ct=0;
        cin>>n;
        
       /* */
        cout<<fun(n)<<"\n";
    }
    return 0;
}
