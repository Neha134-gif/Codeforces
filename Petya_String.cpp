#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for (char &ch : s1) {
    ch = tolower(ch);
    }
    for (char &ch : s2) {
    ch = tolower(ch);
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]<s2[i]){
            cout<<"-1";
            return 0;
        }
        else if(s1[i]>s2[i]){
            cout<<"1";
            return 0;
        }
        
    }
    cout<<"0";
    
    return 0;


}