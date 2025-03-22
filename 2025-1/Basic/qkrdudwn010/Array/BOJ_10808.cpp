#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //알파벳 개수 26개, 0으로 초기화
    int arr[26] = {0, };
    string str;
    cin >> str;

    //str길이만큼 반복문 실행
    for(int i = 0; i < str.length(); i++){
        //알파벳이 나오면 해당하는 배열 인덱스의 값 1증가
        arr[str[i] - 'a']++;    
    }

    //출력
    for(int i = 0; i < 26; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}

