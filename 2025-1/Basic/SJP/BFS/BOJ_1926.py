import sys
from collections import deque
input = sys.stdin.readline

n, m = map(int, input().split())
paint = [[*map(int, input().split())] for _ in range(n)]

visited = [[False for _ in range(m)] for _ in range(n)]

def bfs(i,j):
    area = 0
    visited[i][j] = True
    Q = deque([(i,j)])
    while Q:
        a, b = Q.popleft()
        area += 1
        if (0 <= a-1 <= n-1) and (0 <= b <= m-1) and not visited[a-1][b] and paint[a-1][b]:
            visited[a-1][b] = True
            Q.append((a-1,b))
        if (0 <= a+1 <= n-1) and (0 <= b <= m-1) and not visited[a+1][b] and paint[a+1][b]:
            visited[a+1][b] = True
            Q.append((a + 1,b))
        if (0 <= a <= n-1) and (0 <= b-1 <= m-1) and not visited[a][b-1] and paint[a][b-1]:
            visited[a][b-1] = True
            Q.append((a,b-1))
        if (0 <= a <= n-1) and (0 <= b+1 <= m-1) and not visited[a][b+1] and paint[a][b+1]:
            visited[a][b+1] = True
            Q.append((a,b+1))
    return area

count = 0
areas = []
for i in range(n):
    for j in range(m):
        if not visited[i][j] and paint[i][j]:
            areas.append(bfs(i,j))
            count += 1
print(count)
if areas:
    print(max(areas))
else:
    print(0)
