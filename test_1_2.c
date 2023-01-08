//用函数实现简易加法
/*#include <stdio.h>
int add(int x,int y)//自定义函数add，做加法任务
{
    int z;//声明变量
    z = x + y;//将x,y相加后把值赋给z
    return z;//返回z值到函数add中
}
int main()//主函数
{   
    printf("                               <简易加法计算器>\n");//名称
    printf("\n");
    printf("\n");
    int num1,num2,sum;//声明变量
    printf("请输入想要相加的两个数,空格隔开: ");//提示
    scanf("%d%d",&num1,&num2);//输入两个数
    sum = add(num1,num2);//将add的值赋给sum
    printf("%d+%d=%d\n",num1,num2,sum);//打印结果
    return 0;
}*/

//////////////////////////////////////////////////////////////////////////////////////////////////

//计算n的阶乘
/*#include <stdio.h>
int main()
{   int a = 0,b = 1,n = 0;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        b = b * a;
    }
    printf("b=%d\n",b);
    return 0;
}*/

//////////////////////////////////////////////////////////////////////////////////////////////////

//多个阶乘相加
/* #include <stdio.h>
int main()
{
    int a,b,c=1,d=0;//创建变量(注意:建议给变量初始化,否则变量会赋随机值)
    for(a=1;a<=3;a++)//大循环,循环三次
    {   
        c=1;//当小循环执行之前使c值为1
        for(b=1;b<=a;b++)//小循环,循环次数由每次大循环决定
        {
            c = c * b;//计算阶乘
        }
        d = d + c;//计算多个阶乘的和
    }
    printf("%d\n",d);//打印多个阶乘的和
    return 0;
} */

//////////////////////////////////////////////////////////////////////////////////////////////////

/* //二分法查找元素
#include <stdio.h>
int main()//主函数
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};//创建数组
    int k = 7;//创建变量,要查找的元素为7

    int sz = sizeof(arr)/sizeof(arr[0]);//计算数组中元素个数
    int left = 0;//左端下标
    int right = sz-1;//右端下标

    while(left<=right)//当左端下标≤右端下标时循环，否则跳出循环
    {

        int mid = (left+right)/2;//计算中间值下标

        if(arr[mid] > k)//当中间值大于所查找元素时,执行该代码块内语句
        {
            right = mid-1;//此时右端下标变为中间值减一
        }

        else if(arr[mid] < k)//当中间值小于所查找元素时，执行该代码块内语句
        {
            left = mid+1;//此时左端下标变为中间值加一
        }

        else
        {
            printf("找到了,所找元素下标是:%d\n",mid);
            break;//当找到元素时执行打印函数并跳出循环
        }
    }
    if(left>right)//如果左端下标大于右端下标，执行该代码块内语句
    {
        printf("找不到\n");
    }
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* #include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char arr1[] = "杜龙飞逢考必胜!!!";
    char arr2[] = "#################";
    int left = 0;
    int right = strlen(arr1)-1;

    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);

        Sleep(100);//休息一秒
        system("cls");//执行系统命令的一个函数-cls -清空屏幕

        left++;
        right--;
    }
    printf("%s\n",arr2);
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//从大到小打印所输入的值
/* #include <stdio.h>
int main()
{
    int a=0,b=0,c=0;//创建变量

    scanf("%d%d%d",&a,&b,&c);//调用输入函数给变量赋值

    //用算法实现将输入的值从大到小排序
    //注意:要有一定逻辑顺序,现将a和b,c比较,保证a最大,最后再让b和c比较,保证b>c
    if(a<b)
    {
        //当a<b时，将a,b的值互换
        int xxx= a;
        a = b;
        b = xxx;
    }
    if(a<c)
    {
        int zzz = a;
        a = c;
        c = zzz;
    }
    if(b<c)
    {
        int yyy = b;
        b = c;
        c = yyy;
    }
    

    printf("%d %d %d\n",a,b,c);//打印变量值
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//打印1~100之间所有3的倍数(while循环方法)
/* #include <stdio.h>
#include <windows.h>

int main()
{
    int a = 1;
    while(a<=100)
    {
        if(a%3==0)
        {
            printf("%d ",a);
            Sleep(100);//打印一次,休息0.1秒
        }
        a++;
    }
    return 0;
} */


//打印1~100之间所有3的倍数(for循环方法)
/* #include <stdio.h>
int main()
{
    int i =1;
    int x;
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        printf("%d ",i);
    }
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//辗转相除法求两数最大公约数(1.0)
/* #include <stdio.h>
int main()
{
    int a = 24;
    int b = 18;
    int c;

    while(a%b)
    {
        c = a%b;
        a = b;
        b = c;
    }
    printf("%d\n",b);

    return 0;
} */

//辗转相除法求两数最大公约数(2.0)
/* #include <stdio.h>
int main()
{
    int a,b,c;
    
    scanf("%d%d",&a,&b);

    while(c = a%b)
    {
        a = b;
        b = c;
    }
    printf("%d\n",b);

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//打印1000年到2000年之间的闰年(1.0)
/* #include <stdio.h>
int main()
{
    int year;
    int count = 0;

    for(year = 1000;year <= 2000;year++)
    {
        //判断year是否为闰年
        //1.能被4整除且不能被100整除是闰年
        //2.能被400整除是闰年
        if(year%4==0 && year%100!=0)
        {
            printf("%d ",year);
            count++;
        }
        if(year%400==0)
        {
            printf("%d ",year);
            count++;
        }
    }
    printf("\n其中闰年有%d个\n",count);

    return 0;
} */

//打印1000年到2000年之间的闰年(2.0)
/* #include <stdio.h>
int main()
{
    int year;
    int count = 0;

    for(year=1000;year<=2000;year++)
    {
        if((year%4==0 && year%100!=0) || (year%400==0))
        {
            printf("%d ",year);
            count++;
        }
    }
    printf("\n其中闰年有%d个\n",count);

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//求100到200之间的素数(试除法)
#include <stdio.h>
int main()
{
    int i;
    int count = 0;

    for(i=100;i<=200;i++)//创造i在100到200之间的循环
    {
        int j;
        
        for(j=2;j<i;j++)//创造除数,从2到被除数-1之间的循环(2~i-1)
        {
            if(i%j==0)//判断是否为素数
            {
                //搞清楚逻辑关系,当i全都不能被整除时才是素数,但只要被整除一次,就不是素数

                break;
            }
        }
        if(i==j)
        {
            //所判断的数一直除2到比它小一的数都不能被整除时,此时除数与被除数相等
            //(因为for循环一直使j++,直到有一次j和i相等,跳出循环,打印素数)
            printf("%d ",i);
            count++;//累计是素数的次数
        }
        
    }
    printf("\n总共有%d个素数\n",count);

    return 0;
}