#include<stdio.h>

int main()
{
    const double pi=3.1416;
   double rad,area;
   printf("enter the radius of circle : \n");
   scanf("%lf",&rad);
   area= pi *rad*rad;
   printf("the area of circle is :%lf  \n",area);

   



    return 0;
}