#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c;
    int cnt=0;
    while(n--)
    {
        cin>>a>>b>>c;
        if((a+b)>=2 || (b+c)>=2 || (c+a)>=2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}