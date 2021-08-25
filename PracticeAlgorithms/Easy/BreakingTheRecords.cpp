#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i,s,min=(int)1e9,max=-100;
    int mx=-1,mn=-1;
    for(i=0;i<n;i++){
        cin>>s;
        if(s>max){
            max=s;
            mx++;
        }
        if(s<min){
            min=s;
            mn++;
        }
    }
    cout<<mx<<" "<<mn;
    return 0;
}
