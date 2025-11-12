#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int board[1000][1000];
int vis[1000][1000];

int main(void){
    int M,N;
    cin >> M >> N;
    queue<pair<int,int>> que;
    int day[N][M];
    int allTomatoCount = 0;
    int successTomato = 0;

    for(int i = 0;i<N;i++){
        for(int j=0;j<M;j++){
            cin >> board[i][j];
            if(board[i][j] != -1){allTomatoCount++;}
            if(board[i][j] == 1){
                que.push({i,j}); vis[i][j] =1; successTomato++;
                day[i][j] = 0;
            }
        }
    }
    int maxDay = 0;
    while(!que.empty()){
        pair<int,int> cur = que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx<0 || nx>N-1 || ny<0 || ny>M-1){continue;}//out of range
            if(vis[nx][ny]==1 || board[nx][ny] != 0){continue;}//vis(익은토마토) or board 
            que.push({nx,ny}); vis[nx][ny]=1;
            successTomato++;
            day[nx][ny] = day[cur.first][cur.second] +1;
            if(maxDay < day[nx][ny]){
                maxDay = day[nx][ny];
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
         if(board[i][j] == 0 && vis[i][j] != 1){
        cout << -1;
        return 0;
      }
    }
  }
    cout << maxDay;
    return 0;
}