#include <bits/stdc++.h>
using namespace std;

bool check(const string& s, char start) {
    int n = s.size();
    vector<int> bad;
    for (int i = 0; i < n; i++) {
        char expected = (i % 2 == 0) ? start : (start == 'a' ? 'b' : 'a');
        if (s[i] != expected) bad.push_back(i);
    }
    if (bad.empty()) return true;
    int l = bad.front(), r = bad.back();
    int need_a = 0, need_b = 0;
    int have_a = 0, have_b = 0;
    for (int i = l; i <= r; i++) {
        char expected = (i % 2 == 0) ? start : (start == 'a' ? 'b' : 'a');
        if (expected == 'a') need_a++;
        else need_b++;
        if (s[i] == 'a') have_a++;
        else have_b++;
    }
    
    return (have_a == need_a && have_b == need_b) ||
           (have_b == need_a && have_a == need_b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (check(s, 'a') || check(s, 'b'))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}