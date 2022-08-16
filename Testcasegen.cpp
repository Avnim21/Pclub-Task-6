#include <bits/stdc++.h>     
using namespace std;
int rn() 
{   
    return (rand() % 1000000)+1; 
}
int rd()
{   
    return (rand() % 10)+1; 
}
int rf() 
{   
    return (rand() % 100)+1; 
}
int main () 
{
    srand(time(NULL));
    int n=rn();
    int b[n],d[n],i;
    printf("%d\n",n);
    for(i=0;i<n;i++)
    {
        b[i]=rf();
        d[i]=rd();
        printf("%d %d\n",b[i],d[i]);
    }
  return 0;
}