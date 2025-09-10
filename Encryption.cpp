#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int len = s.size();
    int row = floor(sqrt(len));
    int col = ceil(sqrt(len));
    if (row * col < len) row++;
    for (int i = 0; i < col; i++) {
        for (int j = i; j < len; j += col) cout << s[j];
        cout << " ";
    }
    return 0;
}
