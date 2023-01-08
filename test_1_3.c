#include <stdio.h>

int add(int x,int y)
{
    int z = 0;
    z = x + y;
    return z;
}

int main()
{

    int a,b,sum=0;
    scanf("%d%d",&a,&b);
    sum = add(a,b);
    printf("%d+%d=%d\n",a,b,sum);
    
    return 0;
}