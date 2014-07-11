/*************************************************************************
	> File Name: 8.c
	> Author: qusijun
	> Mail: wiilen.lian@gamil.com 
	> Created Time: 2014年05月09日 星期五 10时44分33秒
 ************************************************************************/

#include<stdio.h>

int max2(int a,int b)
{
    return (a>b)?a:b;
}

int max3(int a,int b,int c)
{
    return max2(max2(a,b),c);
}
int binary_lca(int *a,int s,int e)
{
    if(s>e)
    {
        return 0;
    }
    if(s == e)
        return max2(0,a[s]);

    int m = (s+e)/2;

    int rsum,lsum,sum;
    rsum = sum = 0;
    
    for (int i =m;i<e;i++)
    {
        sum +=a[i];
        rsum = max2(rsum,sum);
    }

    lsum = sum = 0;
    for(int i = m-1;i>=s;i--)
    {
        sum +=a[i];
        lsum = max2(lsum,sum);
    }

    return max3(rsum+lsum,binary_lca(a,s,m),binary_lca(a,m+1,e));


    
}


int dp_lca(int *a,int n)
{
    int nstart = a[n-1];
    int nall = a[n-1];

    for(int i = n-2;i>=0;i--)
    {
        nstart = max2(a[i],a[i]+nstart);
        nall = max2(nstart,nall);
    }
    return nall;
}

int dp_lca2(int *a,int n)
{
    int nstart = a[n-1];
    int nall = a[n-1];
    for(int i = n-2;i>=0;i--)
    {
        if(nstart < 0)
            nstart = 0;
        nstart += a[i];
        if(nstart>nall)
            nall = nstart;
    }
    return nall;
}

int main(void)
{
    int a[] = {31,-41,59,26,-53,58,97,-93,-23,84};

    int b[] = {-1,-2,-4};
    printf("%d\n",dp_lca2(b,3));
    printf("%d",binary_lca(a,0,9));
    return 0;
}
