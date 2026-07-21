#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[7];
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int maxi = INT_MIN;
        for (int i = 0; i < 7; i++)
        {
            if (a[i] > maxi)
            {
                maxi = a[i];
            }
        }
        int ans=2*maxi-sum;
        cout << ans << endl;
    }
    return 0;
}