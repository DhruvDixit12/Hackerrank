#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> freq(k, 0);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x % k]++;
    }
    int ans = min(1, freq[0]);
    for (int i = 1; i <= k/2; i++) {
        if (i != k - i) ans += max(freq[i], freq[k-i]);
    }
    if (k % 2 == 0) ans++;
    cout << ans;
    return 0;
}
