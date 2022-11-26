#pragma once
#define WIDTH 66
#define HEIGHT 44
typedef struct snake {
    int x;
    int y;
    struct snake *next;
} snake;

extern snake *head,*tail;
//注意，标记地图的数组（食物，蛇，墙等），可利用这个来存储打印相关字符
extern char map[HEIGHT][WIDTH];

//关于光标操作和窗口的头文件为<conio.h>,<windows.h>
extern void hide_cursor();
extern void goto_xy(int x,int y);
extern void set_color(int color);
extern void init_snake();
extern void draw_new_snake();

