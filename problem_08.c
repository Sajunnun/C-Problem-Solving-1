#include<stdio.h>
int main(){
    int a,b;
   printf("enter the nums : ");
    scanf("%d %d",&a,&b);
    if(a<b)
{
    printf("%d is greater than %d \n",b,a);
}
else {

    printf("%d is greater than %d \n",a,b); 
}


    return 0;
}