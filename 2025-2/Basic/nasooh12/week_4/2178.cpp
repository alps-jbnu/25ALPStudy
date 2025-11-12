#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int board[501][501];
int vis[501][501];
int dist[501][501];
int main (void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, M ;
    cin >> N >> M;
    string boardLine;
    for(int i = 0;i<N;i++){
        cin >> boardLine;
        for(int j = 0 ;j<M;j++){
            board[i][j] = boardLine[j] - '0';
        }
    }


    queue<pair<int,int>> que;
    que.push({0,0});
    vis[0][0] = 1;
    dist[0][0] = 1;
    while(!que.empty()){
         
        pair<int,int> cur = que.front(); 
        que.pop();
        //다음 node 상하좌우 찾기 4개
        for (int i=0;i<4;i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx <0 || nx >=N ||ny < 0 || ny >= M){continue;}
            if(vis[nx][ny] == 1|| board[nx][ny] == 0){continue;}
            que.push({nx,ny});
            vis[nx][ny] = 1;
            dist[nx][ny] = dist[cur.first][cur.second] +1;
        }
        if(cur.first == N-1 && cur.second == M-1){break;}
    }
    cout << dist[N-1][M-1];
    return 0;
}
/*

101111
101010
101011
111011


1 0 9 10 11 12
2 0 8 0  12 0
3 0 7 0  13 14
4 5 6 0  14 15

*/