bool map[1001][1001];
bool visit[1001];
bool queue[1001];
int front, rear;
int n;	//정점개수
int m;	//간선개수
int v;	//시작정점

void input(void)
{
	scanf("%d%d%d", &n, &m, &v);
	for(int i=1; i<=m; i++)
	{
		int x = 0, y = 0;
		scanf("%d%d", &x, &y);
		map[x][y] = map[y][x] = true;
	}
}

void BFS(int s)
{
	printf("%d ", s);
	visit[s] = true;
	queue[rear++] = s;
	while( front < rear )
	{
		s = queue[front++];
		for(int i=1; i<=n; i++)
		{
			if(map[s][i] == true && !visit[i])
			{
				printf("%d ", i);
				visit[i] = true;
				queue[rear++] = i;
			}
		}
	}
}

int main()
{
	input();
	BFS(v);
	printf("\n");
	return 0;
}