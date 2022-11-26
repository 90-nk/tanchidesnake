#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include "snake.h"

//光标的跳转
void goto_xy(int x,int y){
    COORD position;
    position.X=x;
    position.Y=y;
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle,position);
}

//颜色的设置
void set_color(int colorDigit){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),colorDigit);
}

//光标的隐藏
void hide_cursor(){
    HANDLE handle=GETStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    GetConsoleCursorInfo(handle,&info);
    info.bVisible=FALSE;
    info.dwSize=1;
    SetConsoleCursorInfo(handle,&info);
}
