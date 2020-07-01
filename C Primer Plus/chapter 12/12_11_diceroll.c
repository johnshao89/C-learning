#include<stdio.h>
#include<stdlib.h>
#include"12_12_diceroll.h"
int roll_count=0; //external varibale

static int rollem(int sides) //roll once n side dice
{
    int roll; //result of each roll
    roll = rand()%sides +1;
    roll_count++;
    return roll;
}

int roll_n_dice(int dice, int sides) //roll n times of n sides dice
{
    int d;
    int total=0; //result of roll dice n times
    if(sides<2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if(dice <1)
    {
        printf("Need at least 1 dice.\n");
        return -1;
    }
    for (d=0; d< dice; d++)
        total +=rollem(sides);
    return total;
}