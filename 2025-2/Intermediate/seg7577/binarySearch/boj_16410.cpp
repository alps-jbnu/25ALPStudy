#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(vector<int>& vec, int target, int n){
    int low = 1, high = vec[vec.size() - 1], answer = 0;

    while(low <= high){
        int mid = (low + high) / 2;
        int cnt = 0;
        for (int i = 0; i < n; i++)
            cnt += vec[i] / mid;
        
        if (target <= cnt) {   
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

    int m, n;
    cin >> m >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    
    sort(vec.begin(), vec.end());

    cout << binarySearch(vec, m, n) << '\n';
}