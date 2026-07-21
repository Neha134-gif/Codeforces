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
        int left = 1;
        int right = 3 * n;
        vector<int> ans;
        while (left < right)
        {
            ans.push_back(left);
            ans.push_back(right - 1);
            ans.push_back(right);
            left = left + 1;
            right = right - 2;
        }
        for (int i = 0; i < 3 * n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}