#include <bits/stdc++.h>

using namespace std;

int main(){
    int y;
    cin>>y;
    if(y>=1700 && y<=2700){
        if(y>=1700 && y<=1917){
            if(y%4==0){
                cout<<"12.09."<<y;
            }
            else {
            cout<<"13.09."<<y;
            }
        }
        else if(y>1918 && y<=2700){
            if((y%4==0 && y%100!=0)  || y%400==0){
                cout<<"12.09."<<y;
            }
            else {
            cout<<"13.09."<<y;
            }
        }
        else {
        cout<<"26.09."<<y;
        }
    }
    return 0;
}