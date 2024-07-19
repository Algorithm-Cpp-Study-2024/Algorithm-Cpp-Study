#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k, n;
    int sum = 0;
    stack<int> s;
    cin >> k;

    while (k--) {
        cin >> n;
        if (n != 0) {
            s.push(n);
            sum += s.top();
        } else {
            sum -= s.top();
            s.pop();
        }
    }
    cout << sum;
}