#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[26],i;
    char str[1000];
    for(i=0;i<26;i++){
        cin>>a[i];
    }
    cin>>str;
    int c=0;
    for(i=0;i<strlen(str);i++){
        int d = (int(str[i])-97);
        if(c<a[d])
        c=a[d];
    }
    cout<<(c*strlen(str));
    return 0;
}
