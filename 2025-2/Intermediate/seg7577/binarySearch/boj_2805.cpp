#include <iostream>
#include <algorithm>

using namespace std;

long long binarySearch(vector<int>& vec, long long target){
    long long low = 1, high = vec[vec.size() - 1], answer = 0;
    while (low <= high){
        long long mid = (low + high) / 2, cnt = 0;

        for (auto temp : vec)
            if (temp > mid)
                cnt += temp - mid;
        if (target <= cnt){
            answer = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return answer;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> vec(n);
    for (int i = 0 ; i < n; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end());
    cout << binarySearch(vec, m) << '\n';
}