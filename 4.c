/*************************************************************************
	> File Name: 4.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月06日 星期二 10时55分13秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int is_palindrome(int);
int main(void)
{
    int num = 178;
    char str[10];

    sprintf(str,"%d",num);
    printf("%s,%d",str,strlen(str));
    int max = 0;
    
    int tmp = 0;
    for(int i = 100;i<1000;i++)
    {
        for(int j = 100;j<1000;j++)
        {
            if(is_palindrome(i*j))
            {
                tmp = i*j;
            }
            if(max < tmp)
            max= tmp;


        }
    }
    printf("%d",max);
    return 0;
}


int is_palindrome(int num)
{
    char str[10];
    sprintf(str,"%d",num);
    for(int i = 0;i<strlen(str)/2;i++)
    {
        if(str[i] != str[strlen(str)-1-i])
            return 0;
    }
    return 1;
}
