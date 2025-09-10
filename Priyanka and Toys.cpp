#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) cin >> w[i];
    sort(w.begin(), w.end());
    int ans = 1, curr = w[0];
    for (int i = 1; i < n; i++) {
        if (w[i] > curr + 4) {
            ans++;
            curr = w[i];
        }
    }
    cout << ans;
    return 0;
}
