/*************************************************************************
	> File Name: 5.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月06日 星期二 22时32分21秒
 ************************************************************************/

#include<stdio.h>

int get_gcd(int a,int b)
{
    while(b != 0)
    {
        int r = a%b;
        a = b;
        b= r;
    }
    return a;
}

long long   get_lcm(int a,int b)
{
    int gcd = get_gcd(a,b);
    long long mul = a*b;
    //printf("%lld\n",mul);
    //printf("%lld\n",mul/gcd);
    return mul/gcd;
}

int main(void)
{
    long long a = 232792560;
    long long  b = 20;
    long long test = a*b;
    long long gcd = 2;
    long long gcd_test = a*b/b;
    for (int i = 3;i<21;i++)
    {
        gcd = get_lcm(gcd,i);
    }
    printf("%lld",gcd_test);
    return 0;
}
