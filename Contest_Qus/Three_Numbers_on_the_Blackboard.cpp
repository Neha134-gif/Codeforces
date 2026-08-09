#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;

        long long x[3] = {a, b, c};
        sort(x, x + 3);

        while (x[0] + x[1] < x[2])
        {
            x[2] = x[0] + x[1];
            sort(x, x + 3);
        }

        cout << x[2] - x[0] << "\n";
    }
    return 0;
}