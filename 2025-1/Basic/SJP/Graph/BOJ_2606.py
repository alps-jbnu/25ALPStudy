import sys
from collections import deque
input = sys.stdin.readline

N = int(input())
graph = [[] for _ in range(N + 1)]
for _ in range(int(input())):
    a, b = map(int, input().split())
    graph[a].append(b)
    graph[b].append(a)

visited = [False] * (N + 1)
count = 0

Q = deque([1])
visited[1] = True
while Q:
    for i in graph[Q.popleft()]:
        if not visited[i]:
            Q.append(i)
            visited[i] = True
            count += 1
print(count)
