#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x0,y0,R;
        cin>>x0>>y0>>R;
        for(int a=0; a<=R; a++){
         int b2 = R*R - a*a;
          int b = sqrt(b2);

          if(b*b == b2){
        cout << x0-a << " " << y0-b << endl;
        break;
          }
     }
        
    }
    return 0;
}