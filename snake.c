#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include "snake.h"

void gotoxy(int x,int y){
    COORD position;
    position.X=x;
    position.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),position);
}

void setcolor(int colorDigit){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),colorDigit);
}

snake initsnake(){
    snake snake;
    snake.length=3;
    for(int i=0;i<snake.length;i++){
        snake.body[i].x=WIDTH/2-i;
        snake.body[i].y=HEIGHT/2;
    }
    return snake;
}

void printsnake(snake snake){
    for(int i=0;i<snake.length;i++){
        setcolor(10);
         if(i==0) {
            gotoxy(2*snake.body[i].x,snake.body[i].y);
            printf("¡ö");
        } else{
        gotoxy(2*snake.body[i].x,snake.body[i].y);
        printf("¡õ");
        }
    }
}

void deletesnake(snake snake){
    if(snake.body[snake.length-1].x!=0){
        gotoxy(2*snake.body[snake.length-1].x,snake.body[snake.length-1].y);
        printf("  ");
    }
}

snake movesnake(snake snake,int offsetx,int offsety){
    deletesnake(snake);
    for(int i=snake.length-1;i>0;i--){
        snake.body[i].x=snake.body[i-1].x;
        snake.body[i].y=snake.body[i-1].y;
    }
    snake.body[0].x+=offsetx;
    snake.body[0].y+=offsety;
    printsnake(snake);
    return snake;
}
