#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, find, arr[201] = {0, };
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        arr[x + 100]++;
    }
    cin >> find;
    cout << arr[find + 100];
    return 0;
}
