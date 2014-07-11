/*************************************************************************
	> File Name: 7.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月07日 星期三 17时17分50秒
 ************************************************************************/

#include<stdio.h>

int get_prime()
{
    int i=2;
    int count = 1;
    while(i++ && count < 10001)
    {
        int j;
        for(j = 2;j<i;j++)
        {
            if(i%j == 0)
            {
                break;   
            }
        }

        if(j == i)
        {
            count++;
        }
    }
    return i-1; 
}


int main(void)
{
    printf("%d",get_prime());
    return 0;
}
