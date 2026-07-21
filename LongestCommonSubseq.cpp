#include<bits/stdc++.h>
using namespace std;
int lcs(string &s1,string &s2,int i,int j)
{
    // base case
    if(i<0 || j<0)
    {
        return 0;
    }
    if(s1[i]==s2[j])
    {
        return 1+lcs(s1,s2,i-1,j-1);
    }
    // if not match
    return max(lcs(s1,s2,i-1,j),lcs(s1,s2,i,j-1));
}
int main()
{
    string s1="ABC";
    string s2="ACB";
    int n=s1.length();
    int m=s2.length();
    cout<<lcs(s1,s2,n-1,m-1);
    return 0;
}