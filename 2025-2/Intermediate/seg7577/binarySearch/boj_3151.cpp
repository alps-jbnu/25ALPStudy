// #include <iostream>
// #include <algorithm>

// using namespace std;

// int binarySearch(vector<int> vec, int first, int second){
//     int low = second + 1, high = vec.size() - 1;
//     int target = vec[first] + vec[second], cnt = 0;
//     while (low <= high){
//         int mid = (low + high) / 2;
//         if (target + vec[mid] == 0){
            
//             cnt ++;
//             return cnt;
//         }

//         if (target + vec[mid] < 0)  {   low = mid + 1;  }
//         else                        {   high = mid - 1; }
//     }

//     return cnt;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> vec(n);
//     for (int i = 0; i < n; i++){
//         cin >> vec[i];
//     }


//     sort(vec.begin(), vec.end());   // n log n  130,000
//     for (int i = 0; i < n; i++){
//         cout << vec[i] << " ";
//     }
//     cout << '\n';
    
//     int range = abs(vec[0]) + abs(vec[vec.size() -1]);
//     int arr[n + range];
//     fill_n(arr, n + range, 0);

//     for (int i = 0; i < n; i++){
//         arr[vec[i] + range]++;
//         //cout << "vec[i]: " << vec[i] << "\tarr[vec[i] + range]: " << arr[vec[i] + range] << '\n';
//     }
    
//     int answer = 0;
//     for (int i = 0; i < n - 3; i++){ // n^2 log n = 100,000,000 * 13
//         for (int j = i + 1; j < n - 2; j++){
//             answer += binarySearch(vec, i, j);
//             cout << "answer: "<< answer << "\tvec[i]: " << vec[i] << "\tvec[j]: " << vec[j] << '\n';
//         }
//     }
//     cout << answer << '\n';
// }

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long binarySearch(const vector<int>& vec, int first, int second) {
    int target = -(vec[first] + vec[second]);  
    int low = second + 1;

    auto lower = lower_bound(vec.begin() + low, vec.end(), target);
    auto upper = upper_bound(vec.begin() + low, vec.end(), target);

    return upper - lower;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) 
        cin >> vec[i];

    sort(vec.begin(), vec.end());   

    // for (int i = 0; i < n; i++) {
    //     cout << vec[i] << " ";
    // }
    // cout << '\n';

    int range = abs(vec[0]) + abs(vec[vec.size() -1]);

    long long answer = 0;
    for (int i = 0; i < n - 2; i++) { 
        for (int j = i + 1; j < n - 1; j++) {
            int cnt = binarySearch(vec, i, j);
            if (cnt > 0)
                answer += cnt;
        }
    }
    cout << answer << '\n';
    return 0;
}
