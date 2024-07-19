#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int num;
    string command;
    stack<int> s;
    cin >> num;
    while (num--){
        cin >> command;
        if(command == "push"){
            int x;
            cin >> x;
            s.push(x);
        } else if(command == "pop" ) {
            if(s.empty()) cout<< -1 << '\n';
            else {
                cout << s.top()<< '\n';
                s.pop();
            }
        }
        else if(command == "size") cout << s.size()<< '\n';
        else if(command == "empty") {
            if(s.empty()) cout<< 1<< '\n';
            else cout<< 0<< '\n';
        } else if(command == "top"){
            if(s.empty()) cout<< -1<< '\n';
            else cout << s.top()<< '\n';
        }
    }

}