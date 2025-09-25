import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
adj = [[*map(int, input().split())] for _ in range(N)]

def bfs(x):
    visited = [False] * N
    Q = deque([x])
    while Q:
        i = Q.popleft()
        for j in range(N):
            if adj[i][j] == 1 and not visited[j]:
                visited[j] = True
                result[j] = 1
                Q.append(j)

for x in range(N):
    result = [0] * N
    bfs(x)
    print(' '.join(map(str, result)))
