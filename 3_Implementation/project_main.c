#include"main.h"
int main()
{   int mult;
    int rv = 0; 
    char cc[4];
    int  cv[4];
    printf("This program is used for calculating the value of resistor based on its color code.\n");
    printf("B = Black \t N = Brown \t R= Red \n O = Orange \t Y = Yellow \t");
    printf("G = Green \n L = Blue \t V = Violet \t E = Gray\nW = White\n\n");
    printf("Enter the 4-character color description of the resistor without any space and leaving the tolerance value: \n ");
    getcc(cc);
    rv=getrv(cc,cv,rv);
    printf(" The resistance of resistor with color code %c %c %c %c is %d%d%d X %d  ohms.\n", cc[0],cc[1],cc[2],cc[3],cv[0],cv[1],cv[2],mult);
    return 0;
}