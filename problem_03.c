#include <stdio.h>
int main(){
  int a,b;
  char operation;
  printf("enter the number : \n");
  scanf("%d",&a);
  printf("enter the number : \n");
  scanf("%d",&b);
  printf("enter the operation : \n");
  scanf(" %c", &operation);
 
   if(operation=='+'){
     printf("%d",a+b);
   }
   
   
   else if(operation=='-')
   {
    printf("%d",a-b);
   }
   

return 0;
}