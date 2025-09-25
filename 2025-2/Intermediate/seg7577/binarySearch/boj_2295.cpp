#include <iostream>
#include <algorithm>

using namespace std;

bool binarySearch(vector<int>& vec, int target){
    int low = 0, high = vec.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if (target == vec[mid]) 
            return true;
        if (vec[mid] < target)  {   low = mid + 1;  }
        else                    {   high = mid - 1; }
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

    vector<int> sum;
    for (int i = 0; i < n; i++)
        for (int j = i ; j < n; j++)
            sum.push_back(vec[i] + vec[j]);

    sort(vec.begin(), vec.end());
    sort(sum.begin(), sum.end());

    for (int i = n - 1; i >= 0; i--){
        for (int j = 0; j < n; j++){
            if (binarySearch(sum, vec[i] - vec[j])){
                cout << vec[i] << '\n';
                return 0;
            }       
        }
    }
    
}