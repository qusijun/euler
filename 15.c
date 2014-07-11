/*************************************************************************
	> File Name: 15.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月19日 星期一 17时04分49秒
 ************************************************************************/

#include<stdio.h>
long long sum[21][21];

void init(void)
{
    for(int i = 0;i<21;i++)
    {
        for(int j = 0;j<21;j++)
        {
            sum[i][j] = 1;
        }
    }
}
void routes(int x,int y)
{
    for(int i = 0;i<x;i++)
    {
        for(int j = 0;j<y;j++)
        {
            if(j!=0 && i != 0)
            {
                sum[i][j] = sum[i-1][j]+sum[i][j-1];
            }
                
        }
    }

}
int main(void)
{
    init();
    routes(21,21);
    printf("%lld",sum[20][20]);
    return 0;
}
