#include<stdio.h>
int main()
{
   int a,b;
   printf("enter 2 number:");
   scanf("%d %d",&a,&b);

   if(a<b){
      printf("a is smaller\n");
      printf("b is greater");
   }
   else if(b<a){
      printf("b is smaller\n");
      printf("a is greater");
   }
   else{
      printf(" a & b are equal");
   }

    return 0;




}
