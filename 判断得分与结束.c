#include <stdio.h>
#include "snake.h"


void pass()
{
    ;
}

void judge_if_end_and_score(int end_flag) //end_flag =0未结束，flag = 1已结束
{   
    int end_flag = 0;
    int score = 0;
    snake snake;
    int i = snake.length;
    for(end_flag = 0;end_flag != 1;)
    {
        if(snake.body[i].x <1 || snake.body[i].x>66)
            {
        printf("Game Over");
        gotopart5();
        flag = 1;
            }
        else if (snake.body[i].y < 1 || snake.body[i].y > 44)
            {
        printf("Game Over");
        gotopart5();
        flag = 1;
            }
        else
            {
        flag = 0;
            }


        //判断得分的部分
    
    
    
        for(;flag !=1)
        if(snake.body[0].x ==food.x && snake.body[0].y == food.y)
            {
                score = score + 10;
                deletesnake(snake);
                snake.length = snake.length++;
                i = snake.lenth;
                snake.body[i]
                randomfood();
                printsnake(snake);
                
            }

        else
            {
                pass();
            }
        

    }
}


