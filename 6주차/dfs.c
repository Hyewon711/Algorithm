#include<stdio.h>

bool connection[50][50]={0,};
bool visit[50];

int np,nw;

void dfs(int);

int main() {
    int d1,d2;
    printf("How many Points?");
    scanf("%d",&np);

    printf("How many ways?");

    scanf("%d",&nw);
    printf("\n");

    for(int i=0;i<nw;i++){
        scanf("%d %d",&d1, &d2);
        connection[d1][d2] = connection[d2][d1] = true;
    }
    dfs(1);
}

void dfs(int start)

{
    visit[start] = true;
    printf("Visited %d\n",start);
    for(int i=0;i<np+1;i++)
    {
        if(connection[start][i])    
            if(!visit[i])
                dfs(i);
    }
    return;
}
