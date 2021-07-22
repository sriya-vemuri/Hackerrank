#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    float m=0,p=0,z=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)
        ++m;
        else if(a[i]>0)
        ++p;
        else {
        ++z;
        }
    }
    float j = float(n);
    cout<<fixed<<setprecision(6)<<double(p/j)<<"\n";
    cout<<fixed<<setprecision(6)<<double(m/j)<<"\n";
    cout<<fixed<<setprecision(6)<<double(z/j)<<"\n";
    return 0;
}
