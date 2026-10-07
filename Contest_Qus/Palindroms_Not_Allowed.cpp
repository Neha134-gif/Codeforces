#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string s;
        cin >> N >> s;

        vector<int> freq(26, 0);

        // Frequency count
        for (char ch : s) {
            freq[ch - 'a']++;
        }

        // Check maximum allowed frequency
        int maxFreq = *max_element(freq.begin(), freq.end());

        if (maxFreq > (N + 2) / 3) {
            cout << "NO\n";
            continue;
        }

        // Greedily construct answer
        string ans = "";

        for (int i = 0; i < N; i++) {

            // Find character with maximum frequency
            // which is different from previous 2 characters
            int best = -1;

            for (int c = 0; c < 26; c++) {
                if (freq[c] == 0)
                    continue;

                char ch = 'a' + c;

                // Cannot be same as previous character
                if (i >= 1 && ans[i - 1] == ch)
                    continue;

                // Cannot be same as character 2 positions back
                if (i >= 2 && ans[i - 2] == ch)
                    continue;

                if (best == -1 || freq[c] > freq[best]) {
                    best = c;
                }
            }

            // Should not happen if maxFreq condition is satisfied
            if (best == -1) {
                cout << "NO\n";
                ans = "";
                break;
            }

            ans += char('a' + best);
            freq[best]--;
        }

        if (ans.size() == N) {
            cout << "YES\n";
            cout << ans << "\n";
        }
    }

    return 0;
}