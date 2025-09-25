#include <iostream>
#include <vector>

using namespace std;

int main() {
    long int a, b;
    cin >> a >> b;

    if (a > b) {
        long int tmp = a;
        a = b;
        b = tmp;
    }
    
    if (a == b) {
        cout << 0 << "\n";
    } else {
        cout << b - a - 1 << "\n";
    }
    
    for (long int i = a + 1; i < b; i++) {
        cout << i << " ";
    }
    
    return 0;   
}