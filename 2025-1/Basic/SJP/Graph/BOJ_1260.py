import sys
from collections import deque
input = sys.stdin.readline

N, M, V = map(int, input().split())

graph = [[] for _ in range(N + 1)]
for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)
for i in range(1, N + 1):
    graph[i].sort()

order_dfs = []
visited = [False] * (N + 1)

def dfs(V):
    visited[V] = True
    print(V, end = ' ')
    for i in graph[V]:
        if not visited[i]:
            dfs(i)

dfs(V)

visited = [False] * (N + 1)
print()
Q = deque([V])
visited[V] = True
print(V, end = ' ')
while Q:
    for i in graph[Q.popleft()]:
        if not visited[i]:
            Q.append(i)
            visited[i] = True
            print(i, end = ' ')
