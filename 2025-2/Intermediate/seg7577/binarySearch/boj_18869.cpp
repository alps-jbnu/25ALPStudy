#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(pair<int, int>& x, pair<int, int>& y){
    return x.first == y.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n; //우주의 개수, 행성의 개수
    cin >> m >> n;
    
    vector<pair<int, int>> vec[m];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            int p;
            cin >> p;
            
            //각 우주별 행성 사이즈 저장(정렬 이후 기존 인덱스를 비교하기 위해)
            vec[i].push_back({p, j});
        }
        sort(vec[i].begin(), vec[i].end());
        vec[i].erase(unique(vec[i].begin(), vec[i].end(), cmp), vec[i].end());

        // int index = 0;
        // for (int j = 1; j < n; j++){
        //     if (vec[i][j].first != vec[i][j - 1].first) index++;
        //     vec[i][j].second = index;
        // }
    }
    
    
    // for (int i = 0; i < m; i++){
    //     for (int j = 0; j < n; j++)
    //         cout << vec[i][j].first << " ";
    //     cout << '\n';
    // }
    // for (int i = 0; i < m; i++){
    //     for (int j = 0; j < n; j++)
    //         cout << vec[i][j].second << " ";
    //     cout << '\n';
    // }
    int answer = 0;
    for (int i = 0; i < m - 1; i++){
        for (int j = i + 1; j < m; j++){
            bool flag = true;
            for (int k = 0; k < n; k++){
                if (vec[i][k].second == vec[j][k].second){
                    if (vec[i][k].first)
                    continue;
                }
                //cout << "DEBUG\n";
                flag = false;
                break;
            }
            if (flag)
                answer++;
        }
    }
    cout << answer << '\n';
        
}
