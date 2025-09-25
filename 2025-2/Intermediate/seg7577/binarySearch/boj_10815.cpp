#include <iostream>
#include <algorithm>

using namespace std;

bool binarySearch(vector<int>& vec, int target){
    int low = 0, high = vec.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if (target == vec[mid]) return true;

        if (target <= vec[mid]) {   high = mid - 1; }
        else                    {   low = mid + 1;  }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int m;
    cin >> m;

    sort(vec.begin(), vec.end());
    for (int i = 0; i < m; i++) {
        int target;
        cin >> target;

        if (binarySearch(vec, target))  {   cout << 1 << " ";   }
        else                            {   cout << 0 << " ";   }
    }
    cout << '\n';
    return 0;
}