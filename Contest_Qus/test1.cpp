#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        int i = 0;

        while (i < n) {

            // Count consecutive ones
            if (s[i] == '1') {
                int cnt1 = 0;

                while (i < n && s[i] == '1') {
                    cnt1++;
                    i++;
                }

                ans = max(ans, cnt1);
            }

            // Count consecutive zeros
            else {
                int cnt0 = 0;

                while (i < n && s[i] == '0') {
                    cnt0++;
                    i++;
                }

                int left = 0;
                int right = 0;

                // Count ones on the left
                int j = i - cnt0 - 1;

                while (j >= 0 && s[j] == '1') {
                    left++;
                    j--;
                }

                // Count ones on the right
                j = i;

                while (j < n && s[j] == '1') {
                    right++;
                    j++;
                }

                ans = max(ans, left + cnt0 + right);
            }
        }

        cout << ans << endl;
    }

    return 0;
}