/*************************************************************************
	> File Name: 18.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月26日 星期一 21时27分30秒
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#define MAXVER 130
#define MAXEDG 230
//typedef struct edge edge;
struct edge 
{
    int start;
    int end;
    int weight;
}Edges[MAXEDG];

int vers;
int edgs;

int pre[MAXVER];
int dis[MAXVER];

void init()
{
    for(int i = 0;i<vers;i++)
    {
        dis[i] = INT_MAX;
        pre[i] = -1;
    }
    for(int i = 0;i<edgs;i++)
    {
        if(Edges[i].start == 0)
        {

            dis[Edges[i].end] = Edges[i].weight;
            pre[Edges[i].end] = 0;
        }
    }

    dis[0] = 0;
}


void relax(int u,int v,int weight)
{
    if(dis[u]+weight<dis[v])
    {
        dis[v] = dis[u]+weight;
        pre[v] = u;
    }
}

int Bellman_ford()
{
    int flag = 1;
    for(int i = 1;i<vers;i++)
    {
        for(int j = 0;j<edgs;j++)
        {
            relax(Edges[j].start,Edges[j].end,Edges[j].weight);
        }
    }

    for(int i = 0;i<edgs;i++)
    {
        if(dis[Edges[i].start]+Edges[i].weight<dis[Edges[i].end])
            flag = 0;
    }

    return flag;
}
int main(void)
{
    //printf("%d",INT_MAX);
    scanf("%d%d",&vers,&edgs);
    for(int i = 0;i<edgs;i++)
    {
        scanf("%d%d%d",&Edges[i].start,&Edges[i].end,&Edges[i].weight);

    }
    init();
    int result  = Bellman_ford();
    if(result)
    {
        for(int i = 0;i<vers;i++)
        {
            printf("%d,",dis[i]);
        }
    }

    return 0;
}
