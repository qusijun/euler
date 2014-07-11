/*************************************************************************
	> File Name: 14.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月19日 星期一 12时15分18秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000000

int generate(int n)
{
    long long  x = n;
    int count = 0;
    while(x != 1)
    {
        if(x%2)
        {
            x = 3*x +1 ;
        }
        else
        {
            x = x/2;
        }
        count++;
    }

    return count;
}

int max(int a,int b)
{
    return (a>b)?a:b;
}

int main(void)
{
    printf("%d,",generate(113383));
    int len = 0;
    int tmp = 0;
    int tmp_i = -1;
    for(int i = 2;i<MAX;i++)
    {
        tmp = generate(i);
        printf("%d,%d\n",i,tmp);
        if(len<tmp)
        {
            len = tmp;
            tmp_i = i;
        }
    }
    printf("%d,%d",tmp,tmp_i);
    return 0;
}
