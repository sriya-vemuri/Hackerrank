#include <bits/stdc++.h>

using namespace std;

int max(int f[]){
    int max=f[0];
    int i;
    for(i=1;i<100;i++){
        if(max<f[i]){
            max=f[i];
        }
    }
    return max;
}

int main(){
    int n;
    cin>>n;
    int a,i,f[100]={0};
    for(i=0;i<n;i++){
        cin>>a;
        f[a]++;
    }
    int m = max(f);
    for(i=0;i<100;i++){
        if(m==f[i]){
        cout<<i;
        break;
        }
    }
    return 0;
}
