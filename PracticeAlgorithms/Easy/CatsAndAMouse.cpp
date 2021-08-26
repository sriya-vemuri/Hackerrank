#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int da,db;
        da = abs(c-a);
        db = abs(c-b);
        if(da<db)
        cout<<"Cat A\n";
        else if(db<da)
        cout<<"Cat B\n";
        else {
        cout<<"Mouse C\n";
        }
    }
    return 0;
}
