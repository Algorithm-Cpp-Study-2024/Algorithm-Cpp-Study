#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str, commend;
    int m, i;
    cin >> str >> m;
    list<char> li;
    for (auto c: str) {
        li.push_back(c);
    }
    //내가 가리키는 단어 앞에 커서가 있다고 생각
    auto cursor = li.end();

    for (i = 0; i < m; i++) {
        cin >> commend;
        if (commend == "L") {
            if (cursor != li.begin()) cursor--;
        } else if (commend == "D") {
            if (cursor != li.end()) cursor++;
        } else if (commend == "B") {
            //내가 가리키는 바로 앞 문자 삭제
            if (cursor != li.begin()) cursor = li.erase(--cursor);
        } else if (commend == "P") {
            char word;
            cin >> word;
            //word를 내가 가리키는 문자 앞에 추가
            li.insert(cursor, word);
        }
    }

    for (auto c: li) {
        cout << c;
    }
}
