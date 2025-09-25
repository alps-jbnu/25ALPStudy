#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int result;
    result = A * B * C;
    int number[10] = {0}; //첫번째 원소만 초기화하면 나머지 원소들도 자동으로 초기화
    while (result > 0){
        number[result % 10] += 1;
        result /= 10; //Python과 다르게 int끼리의 나눗셈 결과는 int (floor이 아니라 trunc)
    }
    for (int i = 0; i < 10; i++)
        cout << number[i] << endl;
}
