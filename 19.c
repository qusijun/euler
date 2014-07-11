/*************************************************************************
	> File Name: 19.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年06月06日 星期五 20时32分27秒
 ************************************************************************/

#include<stdio.h>
#define LEAP 366
#define COMMON 365

int days_leap_year[] = {31,29,31,30,31,30,31,31,30,31,30,31};
int days_common_year[] = {31,28,31,30,31,30,31,31,30,31,30,31};

int result[1000];
int is_leap_year(int n)
{
    if(n%4==0 && n%100 != 0 || n%400 == 0)
        return 1;
    return 0;
}

int allDays()
{
    int sum = 0;
    for(int i = 1900;i<2001;i++)
    {
        if(is_leap_year(i))
            sum += LEAP;
        else 
            sum += COMMON;
    }
    return sum;
}


int main(void)
{
    //printf("%d",allDays());
    int alldays = 0;
    int index = 0;
    for(int i = 1900;i<2001;i++)
    {
        
        if(is_leap_year(i))
        {
            printf("%d\n",1);
            for(int j = 0;j<12;j++)
            {
                int days = days_leap_year[j];
                for(int k = 0;k<days;k++)
                {
                    alldays++;
                    if(k==0 && alldays%7 == 0)
                    {
                        result[index++] = alldays;
                    }
                }

            }
        }
        else
        {
            printf("%d\n",0);
            for(int j = 0;j<12;j++)
            {
                int days = days_common_year[j];
                for(int k = 0;k<days;k++)
                {
                    alldays++;
                    if(k == 0 && alldays%7 ==0)
                        result[index++] = alldays;
                }
            }
            
        }
    }
    int count = 0;
    int len = sizeof(result)/sizeof(int);
    for(int i = 0;i<len;i++)
    {
        if(result[i]>365)
            count++;
    }
    printf("%d",count);
    int leapyears = 0;
    for(int i = 1900;i<2001;i++)
    {
        if(is_leap_year(i))
            leapyears++;
    }
    //printf("%d",leapyears);
    return 0;
}
