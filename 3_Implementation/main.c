#include <stdio.h>


void getcc(char cc[]);
long getrv( char cc[], int cv[], int rv );

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
void getcc(char cc[])
{
    int i;
    for(i = 0; i < 4; i++)
        cc[i] = getchar();
}
    


long getrv( char cc[], int cv[], int rv )
{

    int i;
    int j;
    long long mult;
      
    for( i = 0; i < 3; i++)
    {
        switch (cc[i])
        {
            case('b'):
            case('B'):
                cv[i] = 0;
                break;
        
            case('n'):
            case('N'):
                cv[i] = 1;
                break;
        
            case('r'):
            case('R'):
                cv[i] = 2;
                break;
        
            case('o'):
            case('O'):
                cv[i] = 3;
                break;

            case('y'):
            case('Y'):
                cv[i] = 4;
                break;
    
            case('g'):
            case('G'):
                cv[i] = 5;
                break;
    
            case('l'):
            case('L'):
                cv[i] = 6;
                break;
    
            case('v'):
            case('V'):
                cv[i] = 7;
                break;
    
            case('e'):
            case('E'):
                cv[i] = 8;
                break;
    
            case('w'):
            case('W'):
                cv[i] = 9;
                break;
			default: break;
        }
    }
    
  
        switch (cc[3])
         {
            case('b'):
            case('B'):
                mult = 1;
                break;
                
            case('n'):
            case('N'):
                mult = 10;
                break;
            
            case('r'):
            case('R'):
                mult= 100;
                break;
                
            case('o'):
            case('O'):
                mult = 1000;
                break;
            
            case('y'):
            case('Y'):
                mult = 10000;
                break;
                
            case('G'):
            case('g'):
                mult= 100000;
                break;
                
            case('l'):
            case('L'):
                mult= 1000000;
                break;
                
            case('v'):
            case('V'):
                mult = 10000000;
                break;

			//case w not implemented
			
			default: break;
         }

       // rv = ((cv[0] + (cv[1]) + (cv[2])) * mult);
        
    
    
    return cv[4];//,mult;
}