#include<stdio.h>
int main()
{  // odd or even 
    int a;
    printf("enter the num: \n");
    scanf("%d",&a);
    if(a%2==0){

        printf("the num is even \n");
    }
    else {
        printf("the num is odd \n");
    }
    return 0;
}