#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans = "";
    if(s.size()==1){
        cout<<s;
        return 0;
    }
    else{
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[j]=='+'){
                    continue;
                }
                else if(s[i]>s[j]){
                    swap(s[i],s[j]);
                }
            }
        }
    }
    cout<<s;
    return 0;
}