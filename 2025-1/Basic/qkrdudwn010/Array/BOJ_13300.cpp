#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[2][7] = {0, };
    int n, k, s, y, count = 0;
    cin >> n >> k;  
    while(n--){
        cin >> s >> y;
        arr[s][y]++;
    }
    for(int i = 0; i < 2; i++){
        for(int j = 1; j < 7; j++){
            //배열에 0명 초과일 경우
            if (arr[i][j] > 0) {
                //학생을 k명씩 나누어야함.
                //k - 1을 더해줘서
                //arr[i][j]가 k로 나누어 떨어지지 않을 때 올림 효과
                count += (arr[i][j] + k - 1) / k;
            }
        }
    }
    cout << count;
    return 0;
}
