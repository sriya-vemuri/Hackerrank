#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h=1;
        for(int i=1;i<=n;i++){
            if(i%2==0){
                h=h+1;
            }
            else {
            h=h*2;
            }
        }
        cout<<h<<"\n";
    }
    return 0;
}
