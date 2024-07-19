#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, height;
    stack<int> seq;
    stack<int> s;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> height;
        while (!s.empty()) {
            if (s.top() < height) {
                s.pop();
                seq.pop();
            } else break;
        }
        if (s.empty()) cout << 0 << ' ';
        else cout << seq.top() << ' ';
        s.push(height);
        seq.push(i);
    }
}