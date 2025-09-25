#include <iostream>
#include <vector>

using namespace std;

void print_blank(int n) {
    for (int i = 0; i < n; i++) {
        cout << " ";
    }
}

void print_star(int n) {
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        print_blank(n - i);
        print_star(2 * i - 1);
        cout << "\n";
    }

    for (int i = 2; i <= n; i++) {
        print_blank(n - i);
        print_star(2 * i - 1);
        cout << "\n";
    }
    
    return 0;   
}