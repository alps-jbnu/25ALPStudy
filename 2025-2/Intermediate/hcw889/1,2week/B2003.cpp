#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long sum = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    } // 입력하면서 전체 합 계산때려버리고
    
    int cnt = 0; // 횟수계산변수
    if (sum < m)
    {
        cout << cnt << "\n";
        return 0;
        // 합이 m보다 작으면 가능한 경우의수 없음. 0출력후 종료
    }
    else if (sum == m)
    {
        cnt++;
        cout << cnt << "\n";
        return 0;
        // 합이 m과 같으면 가능한 경우의수 한개밖에없음. 1출력후 종료
    }

    // 여기서부터는 합이 m보다 클 때임.
    int left = 0;
    int right = 0;
    sum = 0; // 합 0으로 다시 초기화 and 좌우 포인터 0으로 생성
    while (1) // 한무반복 ON
    {
        if (sum >= m) // left~right의 합이 m보다 크거나 같으면
        {
            if (sum == m) // 같으면
                cnt++;
            sum -= arr[left++]; // cnt++후 좌포인터 +1, 원래 맨 좌포인터 값 sum에서 빼기
        }
        else // 합이 m보다 작으면
        {
            if (right == n) // right가 범위를 벗어나면 끝
                break; 
            sum += arr[right++]; // 우포인터+1후 합 더하기
        }
    }

    cout << cnt << "\n";

    return 0;
}
