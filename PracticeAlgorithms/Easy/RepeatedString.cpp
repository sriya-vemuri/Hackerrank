#include <bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    long long int n;
    string s;
    cin>>s;
    cin>>n;
    long long int c=0;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='a'){
            c++;
        }
    }
    if(n%l==0){
        cout<<c*(n/l);
    }
    else{
        c=c*(n/l);
        for(int i=0;i<(n%l);i++)
        if(s[i]=='a'){
            ++c;
        }
        cout<<c;
    }
    return 0;    
}
