#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int cards[20];

    for (int i = 0; i < 20; i++) {
        cards[i] = i + 1;
    }

    for (int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;

        reverse(cards + (a - 1), cards + b);
    }

    for (int card : cards) {
        cout << card << " ";
    }

}