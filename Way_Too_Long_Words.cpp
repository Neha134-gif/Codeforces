#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>str;
        if(str.size()<=10)
        {
            cout<<str<<endl;
        }
        else{
            int len = str.size();
            cout << str[0] << len - 2 << str[len - 1] << endl;
        }
    }
    return 0;
}