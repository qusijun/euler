/*************************************************************************
	> File Name: 3.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月04日 星期日 20时20分13秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define LIMIT 1000
int is_prime[LIMIT];
void prime();
long max_factor(long long );
int main(void)
{
    //prime();
    long long n = 600851475143;
    long result = max_factor(n);
    printf("%li",result);
    return 0;
}

void prime(void)
{
    for(int i = 0;i<LIMIT;i++)
    {
        is_prime[i] = 1;
    }

    for(long long i = 2;i<sqrt(LIMIT);i++)
    {
        if(is_prime[i])
        {
            long long  n = i+i;
            while(n<=LIMIT)
            {
                is_prime[n] = 0;
                n+=i;
            }
        }
    }
    for(long long  i = 1;i<LIMIT;i++)
    {
        if(is_prime[i])
        {
            printf("%lld,",i);
        }
    }

}

long max_factor(long long num)
{
    long  i,max;
    max = 0;
    while(num !=1)
    {
        i = 2;
        while(num%i != 0)
        {
            i++;
        }

        if(max<i)
        {
            max = i;
        }
        num/=i;

    }
    return max;
}
