/* PROGRAM TO COMPUTE THE EQUATION b=8y^x + e^(x+y)*/
#include <stdio.h>
#include <math.h>
int main()
{
    double x,y,b;
    printf("Enter the values of x\n");
    scanf("%lf", &x);
    printf("Enter the values of y\n");
    scanf("%lf", &y);
    b=8*pow(y,x)+ exp(x+y);
    printf("The value of b=%lf\n",b);
    return 0;
}

