#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    unordered_map<int,int> mp;
    long long ans = 0;
    while (n--) {
        int b, x; cin >> b >> x;
        int val = 0, p = 1;
        int num = x;
        while (num > 0) {
            val += (num % 10) * p;
            p *= b;
            num /= 10;
        }
        ans += mp[val];
        mp[val]++;
    }
    cout << ans;
    return 0;
}
