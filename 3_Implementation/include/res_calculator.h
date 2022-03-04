#ifndef RES_CALCULATOR_H_
#define RES_CALCULATOR_H_
#include "res_calculator.h"
#include<stdio.h>
void getColorCode(char colorCode[]);
//long getResistorValue( char colorCode[], int colorValue[], long *mult );
long getResistorValue( char colorCode[], int colorValue[] );
long getmult(char colorCode[], long *mult);
#endif 