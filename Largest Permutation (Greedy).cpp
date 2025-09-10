#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; 
    cin >> n >> k;
    vector<int> arr(n+1), pos(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        pos[arr[i]] = i;
    }
    for (int i = 1; i <= n && k > 0; i++) {
        int correct = n - i + 1;
        if (arr[i] != correct) {
            int idx = pos[correct];
            swap(arr[i], arr[idx]);
            pos[arr[idx]] = idx;
            pos[arr[i]] = i;
            k--;
        }
    }
    for (int i = 1; i <= n; i++) cout << arr[i] << " ";
    return 0;
}
