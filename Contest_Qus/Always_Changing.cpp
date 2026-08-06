#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int c0 = 0, c1 = 0;
        for (char c : s) {
            if (c == '0') c0++;
            else c1++;
        }

        vector<char> runs;
        for (int i = 0; i < n; i++) {
            if (i == 0 || s[i] != s[i-1])
                runs.push_back(s[i]);
        }

        int m = runs.size();
        int ans = -1;

        for (int L = m; L >= 0; L--) {
            if (L == 0) {
                if (abs(c0 - c1) <= 1) {
                    ans = n;
                }
                if (ans != -1) break;
                continue;
            }

            bool availOdd = (m - L >= 1); // both start parities possible
            vector<char> starts;
            starts.push_back(runs[0]); // p even
            if (availOdd) starts.push_back(runs[0] == '0' ? '1' : '0'); // p odd

            bool found = false;
            for (char st : starts) {
                int zeros, ones;
                if (st == '0') {
                    zeros = (L + 1) / 2;
                    ones = L / 2;
                } else {
                    zeros = L / 2;
                    ones = (L + 1) / 2;
                }
                int del0 = c0 - zeros, del1 = c1 - ones;
                if (abs(del0 - del1) <= 1) {
                    found = true;
                    break;
                }
            }

            if (found) {
                ans = n - L;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}