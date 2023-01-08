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



#include <stdio.h>
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
}