#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int base = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                base++;
        }
        int ans = base;
        for (int i = 1; i < n - 1; i++)
        {
            int curr = base;

            bool leftSame = (s[i] == s[i - 1]);
            bool rightSame = (s[i] == s[i + 1]);

            if (!leftSame && !rightSame)
            {
                curr = base - 1;

                if (s[i - 1] == s[i + 1])
                    curr = base - 2;
            }

            ans = min(ans, curr);
        }

        cout << ans << endl;
    }

    return 0;
}