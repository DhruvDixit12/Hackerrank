#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        queue<string> q;
        q.push("9");
        while (true) {
            string s = q.front(); q.pop();
            long long num = stoll(s);
            if (num % n == 0) {
                cout << s << "\n"; break;
            }
            q.push(s + "0");
            q.push(s + "9");
        }
    }
    return 0;
}
