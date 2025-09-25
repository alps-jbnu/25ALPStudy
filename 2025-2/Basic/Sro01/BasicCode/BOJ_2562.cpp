#include <iostream>
#include <vector>

using namespace std;

int main() {
    int idx = 0, max = 0;
    for (int i = 0; i < 9; i++) {
        int num;
        cin >> num;

        if (num > max) {
            idx = i + 1;
            max = num;
        }
    }

    cout << max << "\n";
    cout << idx << "\n";
    
    return 0;   
}