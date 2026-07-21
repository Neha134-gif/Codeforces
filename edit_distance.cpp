#include<bits/stdc++.h>
using namespace std;
int edit_distance(string &s1,string &s2,int n,int m)
{
    if(n==0)
    {
        return n;
    }
    if(m==0)
    {
        return m;
    }
    if(s1[n]==s2[m])
    {
        return edit_distance(s1,s2,n-1,m-1);
    }

    

}