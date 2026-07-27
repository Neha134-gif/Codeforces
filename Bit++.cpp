#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    string str;
    for(int i=1;i<=n;i++)
    {
        cin>>str;
        if(str[1]=='+')
        {
            ans++;
        }
        else{
            ans--;
        }
    }
    cout<<ans;
    return 0;
}