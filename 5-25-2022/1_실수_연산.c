#include <stdio.h>

int main()
{
    float x,y,z,num ;
    scanf("%f%f%f", &x,&y,&z);
    printf("%.2f - %.2f  * %.2f = %.2f", x,y,z,x-y*z);
}