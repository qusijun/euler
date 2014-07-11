/*************************************************************************
	> File Name: 2.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月04日 星期日 12时32分36秒
 ************************************************************************/

#include<stdio.h>
#define MAX 4000000

int fib[MAX];
int main(void)
{

    fib[0] = 1;
    fib[1] = 2;
    int i ;
    long sum = 0;
    for(i = 2;i<MAX;i++)
    {
        if(fib[i-1]<MAX)
            fib[i] = fib[i-1]+fib[i-2];
        
        if(fib[i]>MAX)
        {

            fib[i] = 0;
            break;

        
        } 
    }
    
    for(int j = 0;j<i;j++)
    {
        if(fib[j]%2 == 0 )
            sum+=fib[j];
    }
    printf("%li,%d",sum,i);


}
