#include <bits/stdc++.h>
using namespace std;

int longestSubseq(int i,int j,string s1,string s2){
    if(i==s1.size() || j==s2.size()){
        return 0;
    }
    if(s1[i]==s2[j]){
        return 1+ longestSubseq(i+1,j+1,s1,s2);
    }
    else{
        return max(longestSubseq(i+1,j,s1,s2), longestSubseq(i,j+1,s1,s2));
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<longestSubseq(0,0,s1,s2);
    return 0;
}
