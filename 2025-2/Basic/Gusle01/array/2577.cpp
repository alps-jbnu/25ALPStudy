#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int a, b, c, arr[10] = {0};
    cin >> a >> b >> c;
    int result = a * b * c;
    string str = to_string(result);
    for(int i = 0; i < str.length(); i++){
        arr[str[i] - '0']++;
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}
