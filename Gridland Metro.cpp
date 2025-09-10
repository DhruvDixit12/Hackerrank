#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k; cin >> n >> m >> k;
    map<long long, vector<pair<long long,long long>>> mp;
    for (int i = 0; i < k; i++) {
        long long r, c1, c2; cin >> r >> c1 >> c2;
        mp[r].push_back({c1, c2});
    }
    long long occupied = 0;
    for (auto &row : mp) {
        auto &intervals = row.second;
        sort(intervals.begin(), intervals.end());
        long long start = intervals[0].first, end = intervals[0].second;
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i].first <= end)
                end = max(end, intervals[i].second);
            else {
                occupied += (end - start + 1);
                start = intervals[i].first;
                end = intervals[i].second;
            }
        }
        occupied += (end - start + 1);
    }
    cout << n*m - occupied;
    return 0;
}
