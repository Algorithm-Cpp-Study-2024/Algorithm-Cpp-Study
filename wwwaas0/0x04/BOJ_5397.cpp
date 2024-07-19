#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int testCase;
    cin >> testCase;
    while (testCase--) {
        list<char> li;
        auto cursor = li.end();

        string keyLogger;
        cin >> keyLogger;

        //실제 커서는 cursor가 가리키는 글자 앞에 있다고 생각
        for (auto c: keyLogger) {
            if (c == '<') {
                if (cursor != li.begin()) cursor--;
            } else if (c == '>') {
                if (cursor != li.end()) cursor++;
            } else if (c == '-') {
                if (cursor != li.begin()) cursor = li.erase(--cursor);
            }
            //insert는 cursor가 가리키는 위치에 값 추가
            //그러나 여전히 cursor는 원래 가리키던 값을 가리킴.
            else li.insert(cursor, c);

        }

        for (auto e: li) cout << e;
        cout << '\n';
    }
}