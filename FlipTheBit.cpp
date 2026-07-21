#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        int p;
        cin >> p;
        int target = a[p];
        int l = 0;
        bool flagL = false;
        for (int i = 1; i < p; i++)
        {
            if (a[i] != target)
            {
                if (!flagL)
                {
                    l++;
                    flagL = true; // Naya block shuru hua
                }
            }
            else
            {
                flagL = false; // Block tab khatam hua jab target mila
            }
        }

        // Right Side Blocks Count
        int r = 0;
        bool flagR = false;
        for (int i = p + 1; i <= n; i++)
        {
            if (a[i] != target)
            {
                if (!flagR)
                {
                    r++;
                    flagR = true; // Naya block shuru hua
                }
            }
            else
            {
                flagR = false; // Block tab khatam hua jab target mila
            }
        }

        int ans = 2 * max(l, r);
        cout << ans << endl;
    }
    return 0;
}