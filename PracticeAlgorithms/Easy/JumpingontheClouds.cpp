#include <bits/stdc++.h>

using namespace std;

int main(){
    long int n;
    cin>>n;
    long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0,j=0;
    while(j<n){
        if(a[j+2]!=int(1)){
            j=j+2;
            c++;
        }
        else{
            j=j+1;
            c++;
        }
        //i=j-1;
        //cout<<c<<" ";
        if(j==n-1){ //&& ){
            //c=c-1;
            break;
        }  
        if(j==n-1 ){//&& n%2==1){
            //c=c+1;
            break;
        }        
    }
    cout<<c;
    return 0;
}
