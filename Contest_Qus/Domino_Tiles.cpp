#include <bits/stdc++.h>
using namespace std;

int countValid(string &s, int n, int start) {
    int cnt = 0;
    for (int firstVal = 0; firstVal <= 1; firstVal++) {
        bool ok = true;
        int val = firstVal;
        for (int i = start; i < n; i += 2) {
            if (s[i] != '?' && (s[i] - '0') != val) {
                ok = false;
                break;
            }
            val = 1 - val;
        }
        if (ok) cnt++;
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int evenCnt = countValid(s, n, 0);
        int oddCnt = countValid(s, n, 1);

        long long ans = (long long)evenCnt * oddCnt % 998244353;
        cout << ans << "\n";
    }
    return 0;
}