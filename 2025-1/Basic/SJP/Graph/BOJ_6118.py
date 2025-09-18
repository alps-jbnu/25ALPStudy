import sys
from collections import deque
input = sys.stdin.readline

N, M = map(int, input().split())
graph = [[] for _ in range(N + 1)]
for _ in range(M):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

visited = [False] * (N + 1)
dist = [0] * (N + 1)

Q = deque([1])
visited[1] = True
while Q:
    p = Q.popleft()
    for i in graph[p]:
        if not visited[i]:
            visited[i] = True
            dist[i] = dist[p] + 1
            Q.append(i)

max_dist = max(dist)

print(dist.index(max_dist), max_dist, dist.count(max_dist))
