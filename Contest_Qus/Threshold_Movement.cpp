#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        b = a;
        sort(b.begin(), b.end());

        bool ok = false;

        // agar n odd hai to kabhi possible nahi (pairs nahi ban sakte)
        if (n % 2 == 0) {

            vector<long long> candidates;

            // k < minimum
            candidates.push_back((long long)b[0] - 1);

            // k > maximum
            candidates.push_back((long long)b[n - 1] + 1);

            // k strictly between consecutive distinct values
            for (int i = 0; i < n - 1; i++) {
                if (b[i + 1] - b[i] > 1)
                    candidates.push_back((long long)b[i] + 1);
            }

            for (long long k : candidates) {

                bool valid = true;
                vector<char> mv(n);

                for (int i = 0; i < n; i++) {
                    if (a[i] < k)
                        mv[i] = 'L';
                    else if (a[i] > k)
                        mv[i] = 'R';
                    else {
                        valid = false;
                        break;
                    }
                }

                if (!valid) continue;

                // pairs (0,1), (2,3), (4,5)... har pair R,L hona chahiye
                for (int i = 0; i < n; i += 2) {
                    if (!(mv[i] == 'R' && mv[i + 1] == 'L')) {
                        valid = false;
                        break;
                    }
                }

                if (valid) {
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}