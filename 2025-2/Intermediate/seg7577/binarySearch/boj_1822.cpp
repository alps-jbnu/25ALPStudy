#include <iostream>
#include <algorithm>

using namespace std;

bool binarySearch(vector<int>& vec, int target){
    int low = 0, high = vec.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;

        if (vec[mid] == target) {   return true;    }
        if (vec[mid] < target)  {   low = mid + 1;  }
        else                    {   high = mid - 1; }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int nA, nB;
    cin >> nA >> nB;

    vector<int> a(nA), b(nB), answer;
    for (int i = 0; i < nA; i++)    {   cin >> a[i];   }
    for (int i = 0; i < nB; i++)    {   cin >> b[i];   }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < nA; i++)
        if (!binarySearch(b, a[i]))
            answer.push_back(a[i]);

    cout << answer.size() << '\n';
    for (auto ans : answer)
        cout << ans << " ";
    cout << '\n';
}