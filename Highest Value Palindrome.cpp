#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string t = s;
    vector<int> change(n,0);
    
    int l = 0, r = n-1;
    while (l < r) {
        if (s[l] != s[r]) {
            if (s[l] > s[r]) t[r] = s[l];
            else t[l] = s[r];
            change[l] = change[r] = 1;
            k--;
        }
        l++; r--;
    }
    if (k < 0) { cout << -1; return 0; }
    
    l = 0, r = n-1;
    while (l <= r && k > 0) {
        if (l == r) {
            if (t[l] != '9' && k > 0) t[l] = '9';
        } else {
            if (t[l] != '9') {
                if (change[l] || change[r]) {
                    if (k >= 1) {
                        t[l] = t[r] = '9'; k--;
                    }
                } else if (k >= 2) {
                    t[l] = t[r] = '9'; k -= 2;
                }
            }
        }
        l++; r--;
    }
    cout << t;
    return 0;
}
