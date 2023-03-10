/* 数组 */


/* 数组的创建和大小/长度计算 */
/* #include <stdio.h>
#include <string.h>
int main()
{
    //创建数组1
    char arr1[] = "abcdef";//这种数组中元素最后还有一个隐藏的\0,是字符串结束标志,占一个字符

    //创建数组2
    char arr2[] = {'a','b','c','d','e','f'};//这种数组中元素没有隐藏\0

    printf("size-arr1=%d\n",sizeof(arr1));
    printf("size-arr2=%d\n",sizeof(arr2));
    //sizeof -- 计算所占空间大小

    printf("strlen-arr1=%d\n",strlen(arr1));
    printf("strlen-arr2=%d\n",strlen(arr2));
    //strlen -- 求字符串长度,遇到\0停止,且不计算\0;遇不到\0,则返回随机值
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 数组内容的访问 */
/* #include <stdio.h>
int main()
{
    char arr[] = "abcdef";
    //数组中元素下标从0开始
    //[] -- 下标引用操作符
    //用 --> 数组名[下标] <-- 的方式来访问数组中下标对应的内容

    //数组元素个数的计算
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",size);
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 一维数组在内存中的存储 */

/* #include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};//创建数组

    int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数

    int i = 0;

    for(i;i<sz;i++)
    {
        printf("&arr[%d]=%p\n",i,&arr[i]);//打印每个元素的地址
        //通过打印的地址可以看出:数组中的每一个元素都会占一个空间,又因为是int类型,所以每个元素占4个字节的空间
        //数组在内存中是连续存放的
    }

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 二维数组的创建和初始化 */

/* #include <stdio.h>
int main()
{
    //C语言中可以创建任意维度的数组,但是一般情况下,我们创建的数组是一维数组和二维数组

    //二维数组的创建
    int arr1[3][4];//创建一个3行4列的整型数组
    char arr2[2][5];
    double arr3[3][3];
    

    //二位数组的初始化
    int arr4[3][2] = {{1,2},{3,4},{5,6}};//完全初始化
    int arr5[4][1] = {{1},{2}};//不完全初始化
    int arr6[][3] = {{1,2,3},{4,5,6}};//省略行元素个数的初始化
    //注意:二维数组初始化时行个数可省略,但列个数不能省略,行列更不能同时省略
    //将“arr”声明为多维数组必须具有除第一个维度之外的所有维度的边界(即只有第一个(行)可以省略个数)
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 二维数组的使用 */
/* #include <stdio.h>
int main()
{
    //访问二维数组中的元素也是通过下标访问(确定行和列)


    int arr[3][4] = {{1,2,3},{4,5}};//创建一个3行4列的数组,并不完全初始化

    int i = 0;

    for(i;i<3;i++)//总共3行
    {
        int j = 0;
        for(j;j<4;j++)//每行4个元素
        {
            printf("%d ",arr[i][j]);//依次打印每行的元素
        }
        printf("\n");//每打印完一行就换新一行(美化输出)
    }

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 二维数组在内存中的存储 */
/* #include <stdio.h>
int main()
{
    int arr[3][4] = {{1,2,3},{4,5}};//创建二维数组
    int i = 0;

    for(i;i<3;i++)
    {
        int j = 0;
        for(j;j<4;j++)
        {
            //打印每一行每一列中元素的地址
            printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
        }
    }
    //通过打印的地址可以看出:二维数组中的元素也是在内存中连续存放的
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 数组名是什么 */
/* #include <stdio.h>
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%p\n",arr);//数组名是数组首元素的地址
    printf("%p\n",&arr[0]);//数组首元素地址
    printf("%d\n",*arr);//数组首元素的值

    //数组名的两个例外
    //1. sizeof(数组名) -- 此时数组名表示整个数组,sizeof(数组名)计算的是整个数组的大小,单位是字节
    //2. &数组名 -- 此时数组名代表的是整个数组,&数组名,取出的是整个数组的地址
    printf("%d\n",sizeof(arr));//数组大小
    printf("%p\n",&arr);//整个数组的地址

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

