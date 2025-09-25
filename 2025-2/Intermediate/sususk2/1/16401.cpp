#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b;
vector<int> v;

bool mn(int x) {
    int cur = 0;
    for (int i = 0; i < b; i++) {
        cur += v[i] / x;
    }
    return cur >= a;
}

int main() {
    cin >> a >> b;
    v.resize(b);
    
    for (int i = 0; i < b; i++) {
        cin >> v[i];
    }
    
    int m = 1;
    int n = *max_element(v.begin(), v.end());

    int answer = 0;
    
    while (m <= n) {
        int mid = (m + n) / 2;
        
        if (mn(mid)) {
            answer = mid;
            m = mid + 1;
        } else {
            n = mid - 1;
        }
    }
    
    cout << answer << endl;
    
    return 0;
}
