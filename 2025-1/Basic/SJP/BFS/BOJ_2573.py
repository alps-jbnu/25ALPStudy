import sys
from collections import deque
input = sys.stdin.readline

N, M = map(int, input().split())
graph = [[*map(int, input().split())] for _ in range(N)]
direction = [(-1, 0), (1, 0), (0, -1), (0, 1)]

def after(graph):
    N, M = len(graph), len(graph[0])
    after_graph = [row[:] for row in graph]
    for i in range(1, N - 1):
        for j in range(1, M - 1):
            if graph[i][j]:
                water = 0
                for dx, dy in direction:
                    nx, ny = i + dx, j + dy
                    if graph[nx][ny] == 0:
                        water += 1
                after_graph[i][j] = max(0, graph[i][j] - water)
    return after_graph

def component(graph):
    count = 0
    N, M = len(graph), len(graph[0])
    visited = [[False for _ in range(M)] for _ in range(N)]
    for i in range(1, N - 1):
        for j in range(1, M - 1):
            if graph[i][j] and not visited[i][j]:
                visited[i][j] = True
                bfs(graph, i, j, visited)
                count += 1
    return count

def bfs(graph, i, j, visited):
    Q = deque([(i,j)])
    while Q:
        a, b = Q.popleft()
        for dx, dy in direction:
            nx, ny = a + dx, b + dy
            if (0 <= nx < N) and (0 <= ny < M) and graph[nx][ny] and not visited[nx][ny]:
                visited[nx][ny] = True
                Q.append((nx,ny))

result = 0
while True:
    n = component(graph)
    if n == 1:
        graph = after(graph)
        result += 1
    elif n == 0:
        print(0)
        break
    else:
        print(result)
        break
