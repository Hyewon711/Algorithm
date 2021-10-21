import sys 
input = sys.stdin.readline
def dfs(x, y, cnt):
	dx = [-1, 1, 0, 0]
	dy = [0, 0, -1, 1]
	arr[x][y] = 0
	while que:
		nowx, nowy, cnt = que.pop(0)
		for i in range(4):
			nx = nowx+dx[i]
			ny = nowy+dy[i]
			if nx<0 or ny<0 or nx>=n or ny>=m or not arr[nx][ny]:
				continue
			if nx == n-1 and ny ==m-1:
				return cnt+1
				break
			arr[nx][ny] = 0
			que.append((nx, ny, cnt+1))
		return -1
			
n, m = map(int, input().split())
arr = [list(map(int, input()[:-1])) for _ in range(n)]
start = (0, 0, 1)
end = (n-1, m-1)
que = []
que.append(start)
print(dfs(start[0], start[1], start[2]))