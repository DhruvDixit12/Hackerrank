#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        unordered_map<string,int> mp;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            string sub = "";
            for (int j = i; j < s.size(); j++) {
                sub += s[j];
                string sortedSub = sub;
                sort(sortedSub.begin(), sortedSub.end());
                ans += mp[sortedSub];
                mp[sortedSub]++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
