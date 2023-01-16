/* ###############函数和递归############## */


/* 库函数 -- strcpy的使用 */
/* #include <stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "great";//创建数组arr1
    char arr2[20] = "$$$$$$$$$$$$$$$$";//创建数组arr2

    strcpy(arr2,arr1);//把arr1中的字符拷贝到arr2中
    //注意:strcpy会把数组中的'\0'一同拷贝,\0是字符串结束标志

    printf("%s\n",arr2);

    //strcpy - string copy -- 字符串拷贝(字符串操作)

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 库函数 -- memset的使用 */
/* #include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "hello world";
    memset(arr,'*',5);
    //将arr数组中前5个字节内存设置为* 

    printf("%s\n",arr);

    //memset -- memory set -- 内存设置(字符数组操作)

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 自定义函数 */

/*
ret_type fun_name(paral,*)
{
    statement;//语句项
}
ret_type -- 返回类型
fun_name -- 函数名
paral -- 函数参数
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 自定义函数 -- 找出两个数中的较大值1.0 */
/* #include <stdio.h>

//自定义函数
int get_max(int x,int y)
{
    if(x<y)
    {
        x = y;
    }
   
    return x;//返回两个数中的较大值
}

int main()
{
    //创建变量
    int a = 66;
    int b = 8;

    int MAX = get_max(a,b);
    //将a,b两个数传给get_max函数执行,最后返回一个值赋给MAX

    printf("%d\n",MAX);

    return 0;
} */

/* 自定义函数 -- 找出两个数中的较大值2.0 */
/* #include <stdio.h>

int get_max(int x,int y)
{
    if(x<y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

int main()
{
    //创建变量
    int a = 66;
    int b = 8;

    int MAX = get_max(a,b);
    //将a,b两个数传给get_max函数执行,最后返回一个值赋给MAX

    printf("%d\n",MAX);
    return 0;
} */

/* 自定义函数 -- 找出两个数中的较大值3.0 */
/* #include <stdio.h>

int get_max(int x,int y)
{
    return(x>y?x:y);
}

int main()
{
    int a,b;
    printf("请输入两个要比较的数:\n");
    scanf("%d%d",&a,&b);
    int MAX = get_max(a,b);
    printf("较大值是%d\n",MAX);

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 自定义函数 -- 交换两个数的值 */
/* #include <stdio.h>

void swap(int* pa,int* pb)
{
    int tmp = 0;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 10;
    int b = 20;

    printf("交换前: a=%d b=%d\n",a,b);//交换前打印打印

    swap(&a,&b);//将a,b的地址传给swap函数执行

    printf("交换后: a=%d b=%d\n",a,b);//交换后打印打印


    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 自定义函数 -- 判断素数 */
/* #include <stdio.h>

int is_prime(int n)//自定义判断素数的函数
{
    int j =2;
    for(j;j<=sqrt(n);j++)
    {
        if(n%j==0)
        {
            return 0;
            //试除时只要被整除则返回0
        }
        
    }
    
    return 1;
    //都不能被整除返回1
}

int main()
{
    int i;
    for(i=100;i<=200;i++)
    {
        if(is_prime(i)==1)
        {
            printf("%d ",i);
            //当is_prime函数返回1时打印当前i的值
        }
    }
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 自定义函数 -- 判断是否为闰年1.0 */
/* #include <stdio.h>

int is_leap_year(int ret)
{
    if((ret%4==0 && ret%100!=0) || (ret%400==0))
    {
        return ret;
        //判断是否为闰年,如果为闰年则返回当前年份
    }
    
    return 0;//注意:这个int类型的自定义函数必须要有返回值
    
}

int main()
{
    int year = 0;
    for(year=1000;year<=2000;year++)
    {
        //判断闰年
        //能被4整整除除且不能被100整除
        //能被400

        int leap_year = 0;
        leap_year = is_leap_year(year);//将is_leap_year函数返回的值赋给leap_year

        if(leap_year!=0)//判断是否打印
        {
            printf("%d ",leap_year);
        }
    }
    return 0;
} */

/* 自定义函数 -- 判断是否为闰年2.0 */
/* #include <stdio.h>

int is_leap_year(int ret)
{
    if((ret%4==0 && ret%100!=0) || (ret%400==0))
    {
        printf("%d ",ret);
        //判断是否为闰年,如果为闰年则直接打印
    }
    
    return 0;//注意:这个int类型的自定义函数必须要有返回值
    
}

int main()
{
    int year = 0;
    for(year=1000;year<=2000;year++)
    {
        //判断闰年
        //能被4整整除除且不能被100整除
        //能被400

        is_leap_year(year);//将is_leap_year函数返回的值赋给leap_year

    }
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 自定义函数 -- 有序整型的二分查找 */
/* #include <stdio.h>

int binary_search(int arr[],int k,int sz)
{                   //这里的arr本质上是一个指针
    //算法实现
    int left = 0;
    int right = sz-1;

    while(left<=right)
    {
        int mid = (left+right)/2;

        if(arr[mid]<k)
        {
            left = mid++;
        }
        else if(arr[mid]>k)
        {
            right = mid--;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数
    int k = 7;//要查找的数
    int ret = binary_search(arr,k,sz);//注意:数组传参仅仅是传该数组的第一个元素的地址

    //如果找到了,返回这个数的下标;如果找不到,返回-1
    if(ret==-1)
    {
        printf("找不到指定数字\n");
    }
    else
    {
        printf("找到啦,下标是%d \n",ret);
    }

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 自定义函数 -- 每调用一次函数,num加1 */
/* #include <stdio.h>

void add(int* p)
{
    (*p)++;
    //(*p)表示一个整体
}

int main()
{
    int num = 0;
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
    
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 链式访问 */
/* #include <stdio.h>
int main()
{
    printf("%d",printf("%d",printf("%d",printf("%d",43))));
    //printf函数的返回值是打印在屏幕上字符的个数
    //第一次打印43,返回值为2;第二次打印2,返回值为1;第三次打印1,返回值为1;第四次打印1,返回值为1
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 函数的声明和定义 */
/* #include <stdio.h>


//在写大的项目时
//函数声明放在自定义头文件中(如:add.h)
int add(int x,int y);

//函数定义放在实现该函数的源文件中(如:add.c)
int add(int x,int y)
{
    int z = x+y;
    return z;
}

//当有工程需要用到此函数时,需包括头文件,且自定义头文件是用双引号""引起来的(如: #include "add.h" )
//函数声明放在使用之前,先声明在使用
int main()
{
    int a = 10;
    int b = 20;
    int sum = add(a,b);
    printf("%d\n",sum);
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

