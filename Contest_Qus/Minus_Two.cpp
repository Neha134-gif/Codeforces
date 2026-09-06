#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];

        map<int,int> freq;
        int odd_count = 0;

        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                odd_count++;
            }
            else
            {
                int t0 = a[i]/2;
                int parity = t0 % 2;
                freq[parity]++;
            }
        }

        cout << max({odd_count, freq[1], freq[0]}) << endl;
    }
    return 0;
}