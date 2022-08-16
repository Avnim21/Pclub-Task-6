#include<stdio.h>
int main()
{
    int m,dc,n,c=0,d,f;
    scanf("%d\n",&n);
    while(n>0)
    {
        scanf("%d %d\n",&(f),&(d));
        dc=60000*f;
        if((d)>6){c=c+dc;}
        else
        {m=5000*f*d;
        if(m>dc)c=c+dc;
        else c=c+m;}
        n--;
    }
    printf("%d",c);
    return 0;
}