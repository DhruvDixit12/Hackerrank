#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<long long> prices(n);
    for (int i = 0; i < n; i++) cin >> prices[i];

    vector<pair<long long,int>> v;
    for (int i = 0; i < n; i++) v.push_back({prices[i], i});
    sort(v.begin(), v.end());

    long long ans = LLONG_MAX;
    for (int i = 1; i < n; i++) {
        if (v[i].second < v[i-1].second)
            ans = min(ans, v[i].first - v[i-1].first);
    }
    cout << ans;
    return 0;
}

