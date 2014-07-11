/*************************************************************************
	> File Name: 10.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月12日 星期一 15时07分25秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX 2000000
int main(void)
{
    long long sum = 2;
    for(int i = 3;i<=MAX;i++)
    {
        int flag = 0;
        for(int j = 2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }

        }
        if(flag == 0)
        {
            sum+=i;
        }
    }
    printf("%lld",sum);
    return 0;
}
