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
        int total=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        map<int,int> freq;
        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
        }
        int mxFreq = 0;
        int maxVal = 0;
        for(auto it: freq)
        {
            if(it.second>mxFreq)
            {
                mxFreq = it.second;
                maxVal = it.first;
            }
        }
        int others = n - mxFreq;
        if(mxFreq<=others+2)
        {
            cout<<total<<endl;
        }
        else{
            int extra = mxFreq - (others+2);
            int ans = total - extra*maxVal;
            cout<<ans<<endl;
        }
    }
    return 0;
}