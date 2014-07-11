/*************************************************************************
	> File Name: 1.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月04日 星期日 12时14分26秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000
int result[MAX];
int main(void)
{
    int i,j;
    for(i = 1,j = 0;i<MAX;i++)
    {
        if(i%3==0||i%5==0)
        {
            result[j++] = i;
        }
    }

    int len = sizeof(result)/sizeof(int);
    int sum = 0;
    for(i = 0;i<len;i++)
    {
        sum+=result[i];
    }
    printf("%d,%d",len,sum);
    return 0;
}
