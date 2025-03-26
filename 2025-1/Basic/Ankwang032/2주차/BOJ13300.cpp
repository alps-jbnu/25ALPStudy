#include <iostream>
using namespace std;

int arr[2][6]={0};
int main()
{
    int n, k, res = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int s, y;
        cin >> s >> y;
        arr[s][y-1]++;
    }

    for (int row = 0; row<2; row++){
        for(int col = 0; col<6; col++){
            res += (arr[row][col]/k);
            if (arr[row][col]%k > 0) res++;
        }
    }
    cout << res;
}