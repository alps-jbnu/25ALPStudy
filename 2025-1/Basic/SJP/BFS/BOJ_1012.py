import sys
from collections import deque
input = sys.stdin.readline

T = int(input())
direction = [(-1, 0), (1, 0), (0, 1), (0, -1)]

def run():
    M, N, K = map(int, input().split())
    visited = [[False for _ in range(N)] for _ in range(M)]
    graph = [[0 for _ in range(N)] for _ in range(M)]
    for _ in range(K):
        x, y = map(int, input().split())
        graph[x][y] = 1

    result = 0
    
    for i in range(M):
        for j in range(N):
            if not visited[i][j] and graph[i][j]:
                bfs(i,j,N,M,visited,graph)
                result += 1
    print(result)
    result = 0

def bfs(i,j,N,M,visited,graph):
    Q = deque([(i,j)])
    visited[i][j] = True
    while Q:
        a, b = Q.popleft()
        for dx, dy in direction:
            nx, ny = a + dx, b + dy
            if (0 <= nx < M) and (0<= ny < N) and not visited[nx][ny] and graph[nx][ny]:
                visited[nx][ny] = True
                Q.append((nx, ny))

for _ in range(T):
    run()
