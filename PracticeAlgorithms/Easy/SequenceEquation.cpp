/*#include <bits/stdc++.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        a[i].first=num;
        a[i].second=i;
    }
    for(int i=1;i<=n;i++){
        int b = a[i].first;
        cout<<a[b].second<<"\n";
    }
    return 0;
}*/
#include <bits/stdc++.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    //vector<int> p;
    //p[0]=0;
    int num;
    /*for(int i=1;i<=n;i++){
        cin>>num;
        p.push_back(num);
    }
    for(int i=1;i<=n;i++){
        auto ip = find(p.begin(),p.end(),i);
        auto ipp = find(p.begin(),p.end(),ip);
        int ind = ipp - p.begin();
        cout<<ind<<"\n";
    }*/
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>num;
        a[num]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<a[a[i]]<<"\n";
    }
    return 0;
}

