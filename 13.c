/*************************************************************************
> File Name: 13.c
> Author: qusijun
> Mail: wiilen.lian@gamil.com 
> Created Time: 2014年05月17日 星期六 11时07分34秒
************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define LEN 10
void reverse(char *a,int n)
{
    for(int i = n;i>=0;i--)
    {
        a[n-i] = a[i];
    }
}

char *add(char *b,char *c)
{
    //int len1 = strlen(b);
    //int len2 = strlen(c);
    //int len = (len1>len2)?len1:len2;
    int prefix = 0;
    int len = strlen(b);
    char *d = (char*)malloc(len+2);

    int i;
    for(i=0;i<len+1;i++)
    {
        int x=b[i]-'0';
        int y=c[i]-'0';
        d[i] = (x+y+prefix)%10+'0';
        prefix = (x+y)/10;

    }
    d[i] = '\0';
    return d;

}

int main(void)
{
    char a = '2';
    printf("%d,",a-'0');
    printf("%c,",2+'0');
    printf("%s",add("123","299"));
    //char *b = (char*)malloc(4);
    return 0;

}
