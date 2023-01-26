/* 分支与循环 */

//高级hello_world
/*#include <stdio.h>
int main()
{
    int ch;
    while((ch = getchar()) !=EOF )
    {
        putchar(ch);
    }
    return 0;
}*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*#include <stdio.h>
int main()//主函数
{
    int password[20];//创建数组
    int ret;//创建变量
    printf("请输入密码>>");//打印函数
    scanf("%s",&password);//用户输入值赋给password  //输入函数会向<输入缓冲区>中提取(即用户输入的值存在<输入缓冲区>中)
    getchar();//向输入缓冲区中提取(此处作用为清空输入缓冲区)(注意:getchar一次只能提取一个值,即此处只清空一个)
    printf("请确认(Y/N)\n");//打印函数
    ret = getchar();//用户输入字符赋给ret
    if(ret == 'Y')//判断语句
    {
        printf("确认成功\n");//执行任务1
    }
    else
    {
        printf("放弃确认\n");//执行任务2
    }
    return 0;
}*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/* #include <stdio.h>
int main()//主函数
{
    int password[20];//创建数组
    int ret;//创建变量
    int ch;//创建变量
    printf("请输入密码>>");//打印函数
    scanf("%s",&password);//用户输入值赋给password  //输入函数会向<输入缓冲区>中提取(即用户输入的值存在<输入缓冲区>中)
    while((ch = getchar()) != '\n')//用while实现getchar()输入函数任务循环(此处作用为清空当前输入缓冲区中所有值)
    {                               //当getchar()提取到\n后,循环停止,跳出循环,继续向下执行任务
        ;//空语句
    }
    printf("请确认(Y/N)\n");//打印函数
    ret = getchar();//用户输入字符赋给ret
    if(ret == 'Y')//判断语句
    {
        printf("确认成功\n");//执行任务1
    }
    else
    {
        printf("放弃确认\n");//执行任务2
    }
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//二分法查找元素1.0
/* #include <stdio.h>
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


//二分法查找元素2.0
/* #include <stdio.h>
int main()//主函数
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};//创建数组
    int k;//创建变量,手动输入要查找的元素
    int* p;
    p = &k;
    scanf("%d",p);//这里的p为指针类型,存放的是地址,所以不用加&

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
        //注意左加右减
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
/* #include <stdio.h>
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
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//计算1~100之间9出现的次数
/* #include <stdio.h>
int main()
{
    int count = 0;

    for(int i=1;i<=100;i++)//创造1~100的循环
    {
        if(i%10==9)//余数是9,计算的是个位的9(注意:9除以10>>商0余9)
        {
            count++;
        }
        //两个if语句是并列关系,即条件满足时都执行(因为99个位十位都出现了9)
        if(i/10==9)//商是9,计算的是十位的9
        {
            count++;
        }
    }

    printf("1~100之间总共出现了%d个数字9\n",count);

    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//计算1/1-1/2+1/3-1/4+......+1/99-1/100的值并打印出来(分数求和)
/* #include <stdio.h>
int main()
{
    int i =0;
    double sum = 0.0;
    int change = 1;

    for(i=1;i<=100;i++)//建立1到100的循环
    {
        sum += change*1.0/i;//把分数相加的值赋给sum
        change = -change;//改变1的正负,从而改变分数的正负
    }

    printf("%lf\n",sum);
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//10个数里面求最大值
/* #include <stdio.h>
int main()
{
    int arr[] = {20,3,15,-66,8,51,92,33,0,-5};//创建10个元素的数组
    int i = 0;
    int max = arr[0];
    //注意:这里的max不能赋为0,因为max作为参数要去与数组中元素比较,而且不能判断0与数组中元素的大小
    //max应赋为数组中的任意一个值去与其他元素比较大小

    for(i;i<10;i++)
    {
        if(max<arr[i])//让数组里面的元素比较大小,且较大值永远赋给max
        {
            max = arr[i];
        }
    }

    printf("%d\n",max);//打印最大值
    return 0;
} */

//n个数里面求最大值
/* #include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};//创建数组(假设元素个数为n个)
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int max = arr[0];
    
    for(i;i<n;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    printf("%d\n",max);
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//9X9乘法口诀表的打印
/* #include <stdio.h>
int main()
{
    int line = 0;//创建行变量

    for(line=1;line<=9;line++)//确定有9行
    {
        int column = 1;//创建列变量
        for(column;column<=line;column++)//用行来控制列数
        {
            printf("%d*%d=%-2d ",line,column,line*column);
            //%2d指打印时打印两位,当不够两位时,用空格补齐(默认又对齐)
            //%-2d指打印时打印两位,当不够两位时,用空格补齐,且为左对齐

        }
        printf("\n");//注意换行的位置
    }
    
    return 0;
} */

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//猜数字游戏
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>

void menu()//创建菜单函数
{   
    
    printf("             猜数字游戏\n");
    printf("*************************************\n");
    printf("***      1.play       0.exit      ***\n");
    printf("*************************************\n");
    printf("      选择1开始游戏,选择0退出游戏\n");
    //打印菜单界面
}

void game()
{
    //1.生成一个随机数
    int receive = rand()%100+1;//创建receive变量来接收rand函数生成的随机值
    //rand()是一个库函数,用来生成随机数
    //rand函数生成的随机数范围在 0~32767 (十进制)之间
    //注意:rand函数使用时需用srand函数来设置rand函数生成数的起点,以确保rand函数生成的随机数真正随机
    //%100+1是为了控制receive最终值的范围,程序设计需要考虑实际情况

    //2.猜数字
    int guess = 0;
    printf("请猜数字:");
    while(1)
    {
        
        scanf("%d",&guess);//接收用户输入的数字
        //作比较
        if(guess<receive)
        {
            printf("猜小啦!再试试:");
        }
        else if(guess>receive)
        {
            printf("猜大啦!再试试:");
        }
        else
        {
            printf("恭喜你,猜对啦!!!\n");
            break;
        }
    }

}

int main()//主函数(程序从这里开始执行)
{

    printf("           !!!欢迎光临!!!\n");
    sleep(2);
    system("cls");

    /* 
    时间戳:
    当前计算机时间 - 计算机起始时间(1970.1.1 0:0:0) = (...)秒 
    时间戳每时每刻都在发生变化
    */

    /* srand函数的参数需要整型随机数,但rand函数又需要由srand函数去设置随机起点,陷入了循环.
    但是,我们可以根据时间戳的特性,来作为srand函数的参数,此时srand函数可以使用,然后就可以来
    设置rand函数的随机起点了. */

    /* 用time函数得到当前计算机时间,并把它编码成 time_t 格式,但 time_t 数据类型是长整型,所
    以用 unsigned int 来把time()函数的值强制转换为无符号整型 */

    //NULL表示空指针
    srand((unsigned int)time(NULL));//在调用rand函数之前用srand函数设置随机起点
    //srand函数的参数必须是整型且为随机数
    //用来设置rand函数生成数的随机起点
    //注意:每次程序运行,srand函数只需设置一次随机起点,千万不要把它放在循环中


    int input = 0;

    do
    {
        menu();//调用菜单函数
        printf("请选择:");
        scanf("%d",&input);//接受用户输入的信息

        switch(input)//对用户做出的选择进行判断
        {
            case 1:
                game();//执行猜数字游戏函数
                sleep(2);
                system("cls");
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误,请重新选择!\n");
                sleep(2);
                system("cls");
                break;
        }
        
    } while (input);//巧用input作为判断参数

    return 0;
}