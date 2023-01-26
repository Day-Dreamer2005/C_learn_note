/* 测试三子棋 */

#include <stdio.h>
#include "game_nac.h"

void menu()
{
    printf("*****************************************\n");
    printf("******     1.play       0.exit     ******\n");
    printf("*****************************************\n");
}

void game()
{
    //创建一个数组,用来存放走出的棋盘信息
    char board[ROW][COL] = 0;

    //初始化棋盘(数组)
    Initboard(board,ROW,COL);
}

void test()
{
    int input;

    do
    {
        menu();
        printf("请选择:");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误,请重新选择:");
                break;
        }

    }while(input);
}

int main()
{
    test();
    return 0;
}