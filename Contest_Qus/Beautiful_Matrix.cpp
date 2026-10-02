#include <bits/stdc++.h>
using namespace std;
int main(){
    int r1[6],r2[6],r3[6],r4[6],r5[6];
    int row=0;
    int col=0;
    for(int i=1;i<=5;i++){
        cin>>r1[i];
        if(r1[i]==1){
            row = 1;
            col = i;
        }
    }
    for(int i=1;i<=5;i++){
        cin>>r2[i];
        if(r2[i]==1){
            row = 2;
            col = i;
        }
    }
    for(int i=1;i<=5;i++){
        cin>>r3[i];
        if(r3[i]==1){
            row = 3;
            col = i;
        }
    }
    for(int i=1;i<=5;i++){
        cin>>r4[i];
        if(r4[i]==1){
            row = 4;
            col = i;
        }
    }
    for(int i=1;i<=5;i++){
        cin>>r5[i];
        if(r5[i]==1){
            row = 5;
            col = i;
        }
    }
    int ans = abs(row-3) + abs(col-3);
    cout<<ans;
    return 0;
}
