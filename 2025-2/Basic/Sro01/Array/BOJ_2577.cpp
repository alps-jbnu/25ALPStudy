#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> arr(10, 0);

    int multi = 1;

    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        multi *= num;
    }

    string res = to_string(multi);

    for (char c : res) {
        int idx = c - '0';
        arr[idx]++;
    }

    for (int a : arr) {
        cout << a << "\n";
    }
    return 0;   
}