#include <bits/stdc++.h>

using namespace std;

int max(vector<int>s){
    int max=s[0];
    for(int i=1;i<s.size();i++){
        if(max<s[i])
        max=s[i];
    }
    return max;
}

int main(){
    int b,m,n;
    cin>>b>>n>>m;
    int i,k[n],u[m];
    for(i=0;i<n;i++){
        cin>>k[i];
    }
    int z=n*m;
    vector<int> s;
    for(i=0;i<m;i++){
        cin>>u[i];
        for(int j=0;j<n;j++){
        if(b>=u[i]+k[j])
        s.push_back(u[i]+k[j]);
    }
    }
    if(s.empty()){
        cout<<-1;
    }
    else{
        cout<<max(s);
    }
    return 0;
}
