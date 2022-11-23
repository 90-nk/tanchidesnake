#pragma once
#define WIDTH 66//part1定义,记得修改一下
#define HEIGHT 44//part1定义，记得修改一下
//蛇身的结构体
typedef struct body{
    int x;
    int y;

} body;
//蛇的结构
typedef struct snake{
    body body[HEIGHT*WIDTH];
    int length;
} snake;

//这里添加导出你们写的方法
extern void gotoxy(int x,int y);
extern void setcolor(int color);
extern snake initsnake();
extern void printsnake(snake snake);


extern void judge_if_end_and_score(int end_flag);
