#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    string input;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        list<char> L;
        auto it = L.begin(); // 리스트의 반복자 (커서)

        for (char ch : input) {
            if (ch == '<') {
                if (it != L.begin()) 
                    --it; // 커서 왼쪽 이동
            }
            else if (ch == '>') {
                if (it != L.end()) 
                    ++it; // 커서 오른쪽 이동
            }
            else if (ch == '-') {
                if (it != L.begin()) 
                    it = L.erase(--it); // 이전 문자 삭제 후, 새로운 커서 위치 설정
            }
            else {
                L.insert(it, ch); // 현재 커서 위치에 문자 삽입
            }
        }

        for (char ch : L) cout << ch;
        cout << "\n";
    }

    return 0;
}
