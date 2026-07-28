#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int cnt=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     int kthscore = arr[k-1];
     for(int i=0;i<n;i++)
     {
        if(arr[i]>=kthscore && arr[i]>0)
        {
            cnt++;
        }
     }
    cout<<cnt;
    return 0;
    
}