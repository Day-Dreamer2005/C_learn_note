/* 用指针手动为变量赋值 */
/* #include <stdio.h>
int main()
{
    int a = 0;
    int *p;
    p = &a;
    scanf("%d",p);
    printf("%d\n",a);
    return 0;
} */


#include <stdio.h>
int main()
{
    int a = 66;
    int* p;
    p = &a;
    printf("a变量的地址:%p\n",&a);
    printf("p变量储存的地址:%p\n",p);
    printf("直接打印变量a的值:%d\n",a);
    printf("打印p变量地址所指的值%d\n",*p);
    return 0;
}