#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y)  {   return x > y;   }

int traversal(vector<int>& vec, int target){
    int cnt = 0;
    for (auto temp : vec){
        cnt += (temp / target);
    }
    return cnt;
}

long long binarySearch(vector<int>& vec, int n){
    long long low = 0, high = vec[0];
    long long answer = 0;
    while(low <= high){
        long long mid = (low + high) / 2;
        if (mid == 0)   mid = 1;

        long long temp = traversal(vec, mid);
        if (n <= temp){
            answer = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return answer;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long k, n;
    cin >> k >> n;

    vector<int> vec(k);
    for (int i = 0; i < k; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end(), cmp);
    // for (int temp : vec){
    //     cout << temp << " ";
    // }
    // cout << '\n';

    cout << binarySearch(vec, n) << '\n';
    
}