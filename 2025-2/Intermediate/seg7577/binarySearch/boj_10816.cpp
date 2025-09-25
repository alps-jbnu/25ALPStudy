#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
map<int, int> e_cnt;

// int binary_search(vector<int>& vec, int target){
//     int low = 0, high = vec.size() - 1;
//     while(low <= high){
//         int mid = (low + high) / 2;

//         if (target == mid)
//     }
// }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++){
        cin >> vec[i];
        if (e_cnt.find(vec[i]) == e_cnt.end())
            e_cnt.insert({vec[i], 0});
        e_cnt[vec[i]]++;
    }

    int m;
    cin >> m;
    
    for (int i = 0; i < m; i++){
        int target;
        cin >> target;

        if (e_cnt.find(target) == e_cnt.end())
            cout << 0 << " ";
        else
            cout << e_cnt[target] << " ";
    }
    cout << '\n';
}