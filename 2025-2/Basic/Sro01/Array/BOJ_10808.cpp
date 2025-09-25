#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int size = 'z' - 'a' + 1;
    vector<int> arr(size, 0);

    for (char c : s) {
        int idx = c - 'a';

        arr[idx]++;
    }

    for (int a : arr) {
        cout << a << " ";
    }


    return 0;   
}