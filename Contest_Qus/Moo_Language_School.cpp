#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool zero = false;
        int cnt = 0;
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                cnt++;
            }
            else
            {
                cnt++;
                zero = true;
            }

            if(cnt == k)
            {
                if(zero == true)
                    ans += 0;
                else
                    ans += 1;

                cnt = 0;
                zero = false;
            }
        }

        cout << ans << endl;
    }

    return 0;
}