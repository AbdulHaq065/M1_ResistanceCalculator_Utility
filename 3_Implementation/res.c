#include"res_calculator.h"
void getColorCode(char colorCode[])
{
    int i;
    for(i = 0; i <4; i++)
        colorCode[i] = getchar();

}

long getResistorValue( char colorCode[], int colorValue[], long *mult )//int r_value )
{

    int i;
    int j;


    for( i = 0; i < 3; i++)
    {
        switch (colorCode[i])
        {
            case('b'):
            case('B'):
                colorValue[i] = 0;
                break;

            case('n'):
            case('N'):
                colorValue[i] = 1;
                break;

            case('r'):
            case('R'):
                colorValue[i] = 2;
                break;

            case('o'):
            case('O'):
                colorValue[i] = 3;
                break;

            case('y'):
            case('Y'):
                colorValue[i] = 4;
                break;

            case('g'):
            case('G'):
                colorValue[i] = 5;
                break;

            case('l'):
            case('L'):
                colorValue[i] = 6;
                break;

            case('v'):
            case('V'):
                colorValue[i] = 7;
                break;

            case('e'):
            case('E'):
                colorValue[i] = 8;
                break;

            case('w'):
            case('W'):
                colorValue[i] = 9;
                break;
			default: break;
        }
    }
    switch (colorCode[3])
         {
            case('b'):
            case('B'):
                *mult = 1;
                break;

            case('n'):
            case('N'):
                *mult = 10;
                break;

            case('r'):
            case('R'):
                *mult = 100;
                break;

            case('o'):
            case('O'):
                *mult = 1000;
                break;

            case('y'):
            case('Y'):
                *mult = 10000;
                break;

            case('G'):
            case('g'):
                *mult = 100000;
                break;

            case('l'):
            case('L'):
                *mult = 1000000;
                break;

            case('v'):
            case('V'):
                *mult = 10000000;
                break;



			default: break;
        }

    return colorValue[4];
}