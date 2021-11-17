#include <bits/stdc++.h>

using namespace std;
/*int squares(int a, int b) { //works only for less no of test cases
    int ct=0;
    int i;
    for(i=a;i<=b;i++){
        if(int(sqrt(i))*int(sqrt(i))==i)
            ct++;
    }
    return ct;
}
*/
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<floor(sqrt(b))-ceil(sqrt(a))+1<<"\n"; //numbers in b\w square roots inclusive
    }
    return 0;
}
