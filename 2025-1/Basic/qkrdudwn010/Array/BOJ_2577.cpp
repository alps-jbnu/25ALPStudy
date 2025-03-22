#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, arr[10] = {0, };
    cin >> a >> b >> c;
    int result = a * b * c;

    //int형 result 값을 string형으로 변환
    string str_result = to_string(result);
    
    for(int i = 0; i < str_result.length(); i++){
        arr[str_result[i] - '0']++;
    }
    
    //출력
    for(int i = 0; i < 10; i++){
        cout << arr[i] << '\n';
    }
    return 0;
}
