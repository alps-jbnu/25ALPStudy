/*
수형
*/

#include <iostream>
#include <queue>
#include <vector> // utility 헤더파일이 포함됨
using namespace std;
int board[502][502]; // 도화지
bool vis[502][502];  // 방문 여부

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1}; // 상하좌우 네 방향을 의미

int paintCount = 0;
int paintSize = 0;
int paintSizeMax = 0;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<pair<int, int>> que;

    int n, m; // board size
    cin >> n >> m;
    // board(도화지) 초기화
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
        }
    }

    // BFS 탐색
    // 그림 찾기

    // 전체 순회를 하여 큐에 넣을 원소를 찾는다 <- BFS탐색을 할 첫 요소 찾기
    // 찾는 즉시 그 원소로 bfs탐색을 하여
    // 그림의 크기를 구해 최대값인지 확인하고 그림 갯수 +1한다
    // 끝까지 전체순회를 마치면 종료 후 결과 출력

    for (int i = 0; i < n; i++){
        for(int j = 0;j<m;j++){
            if(vis[i][j]!=1 && board[i][j]==1){
                que.push({i,j});
                vis[i][j] = 1;
                paintCount++; 
                //if que has data -> bfs to find result
                while(!que.empty()){
                    //주변 탐색
                    //out of range 검사 & 방문가능+방문여부 검사
                    pair<int,int> cur = que.front(); que.pop();
                    vis[cur.first][cur.second] = 1;
                    paintSize++;
                    for(int k =0;k<4;k++){
                        int nx = cur.first + dx[k];
                        int ny = cur.second + dy[k];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m){ continue;}
                        if(vis[nx][ny]==1 || board[nx][ny]!=1){ continue;}
                        que.push({nx,ny});
                        vis[nx][ny] = 1;
                    }
                    
                }
                if(paintSize>paintSizeMax){
                    paintSizeMax = paintSize; 
                }
                paintSize = 0;
            }
        }
    }
    cout << paintCount << "\n"
         << paintSizeMax;

    return 0;
}