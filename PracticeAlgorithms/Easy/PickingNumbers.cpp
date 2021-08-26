#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a;
    int i,num;
    for(i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
    int ans=0,c=0,flag=0;
    for(i=0;i<a.size();i++){
        for(int j=i;j<a.size();j++){
        if(a[i]==a[j]||a[j]==a[i]+1){
            ans++;
        }
        else{
            if(ans>c)
            c=ans;
            ans=0;
            flag=1;
            break;
        }
    }
    }
    if(flag==0)
    cout<<n;
    else
    cout<<c;
    return 0;
}
