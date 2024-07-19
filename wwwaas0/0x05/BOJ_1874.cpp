#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    string answer="";
    int cnt = 1;
    stack<int> s;
    cin >> n;

    while (n--) {
        cin >> x;
        while (x >= cnt) {
            s.push(cnt++);
            answer += "+\n";
        }
        if(s.top() == x) {
            s.pop();
            answer += "-\n";
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << answer;
}