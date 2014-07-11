/*************************************************************************
	> File Name: 26.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年06月15日 星期日 20时01分05秒
 ************************************************************************/

#include<stdio.h>
#define MAX 1000
int mods[MAX];

int get_mod(int numerator,int n)
{
    while(numerator/n==0){

        numerator*=10;
    }
    //printf("%d\n",numerator);
    return numerator%n;
}

int recurring_cycle_len(int n)
{
    int flag = 0;
    int len = 0;
    int tmp = 0;
    int numerator = 1;
    while(1)
    {
        int mod = get_mod(numerator,n);
        //printf("mod = %d\n",mod);
        if (mod == 0)
            break;
        else{
            flag++;
            mods[flag] = mod;
            for(int i = 0;i<flag;i++)
            {
                if(mods[i]==mod)
                {
                    len = flag-i;
                    tmp = 1;
                    break;
                }
            }
            if(tmp){
                break;
            }
        }
        numerator = mod;
    }
    return len;
}

void mods_init(void)
{
    for(int i=0;i<MAX;i++)
    {
        mods[i] = 0;
    }
}


int main(void)
{
    printf("%d\n",get_mod(1,7));
    printf("%d\n",recurring_cycle_len(2));
    int max = 0;
    int max_value = 0;
    for(int i = 2;i<1000;i++)
    {
        int len;
        if(max<(len = recurring_cycle_len(i))){
            max = len;
            max_value = i;

        }
    }
    printf("%d,%d\n",max,max_value);
    return 0;
}
