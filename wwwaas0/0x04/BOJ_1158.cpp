#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    list<int> li;

    if(n == 1) {
        cout << "<1>";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        li.push_back(i);
    }

    auto cursor = li.begin();
    for (int i = 0; i < n; i++) {
        int seq = k - 1;
        while (seq--) {
            // li의 end에는 아무값도 안들어가기 때문
            if (cursor == li.end()) cursor = li.begin();
            cursor++;
        }
        if (cursor == li.end()) cursor = li.begin();
        if (i == 0) cout << '<' << *cursor << ", ";
        else if (i == n - 1) cout << *cursor << '>';
        else cout << *cursor << ", ";

        cursor = li.erase(cursor);
    }
}