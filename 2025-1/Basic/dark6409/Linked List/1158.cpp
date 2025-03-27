#include <iostream>
#include <queue>
using namespace std;

// k번째 찾으려고, 큐의 맨 앞을 맨 뒤로 한명씩 옮기면서 대상은 찾되 사람 간 전후관계 유지

int main() {
    int n, k;
    cin >> n >> k;

    queue<int> q;
    for (int i = 1; i <= n; i++) q.push(i); 

    cout << "<";
    
    while (!q.empty()) {
        for (int i = 1; i < k; i++) {
            q.push(q.front());
            q.pop();
        }

        cout << q.front();
        q.pop();

        if (!q.empty()) cout << ", ";
    }

    cout << ">\n";

    return 0;
}
