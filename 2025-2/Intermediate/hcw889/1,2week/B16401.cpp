#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    vector<long long> snack(n);
    long long max = 0;

    // 입력때부터 max값 저장
    for (int i = 0; i < n; i++)
    {
        cin >> snack[i];
        if (snack[i] > max)
            max = snack[i];
    }

    // 모든 길이가 0인경우
    if (max == 0)
    {
        cout << "0\n";
        return 0;
    }

    // 최대 최소 길이
    long long low = 1;
    long long high = max;
    long long answer = 0;

    // 모든 길이를 합한것 / L >= 조카의 수
    // 위 식을 만족시키는 최대 L을 구하는 코드
    while (low <= high)
    {
        // low = 길이 L은 최소 1 이상
        // max = 길이 L은 max보다는 작아야함

        long long mid = (low + high) / 2; // 일단 중간길이로 잘라보죠??
        long long piece = 0;
        for (int i = 0; i < n; i++)
        {
            piece += snack[i] / mid; // mid 길이로 잘라본 조각수
            if (piece >= m) // 어라 조카수 m 보다 크네? 그럼 일단 가능이잖아
                break; // 바로 break
        }
        // 불가능한 경우는 밑에 if에서 걸러지게 됨.

        if (piece >= m) // 가능한 경우
        {
            answer = mid; // 일단 답을 이걸로 설정해놓자
            low = mid + 1; // 그리고 길이 1증가시켜서 다시해보자. 안되면 지금이 최대길이인거지ㅇㅇ
        }
        else // 불가능한 경우
        {
            high = mid - 1; // 안되네;; 1줄여서 다시해보자
        }
    }

    cout << answer << "\n"; // 결국 우리는 답을 찾게 되어있다. 언제나 그랬듯.

    return 0;
}
