#include<stdio.h>
int main()
{
  for(int i=0;i<=100;i++)
  {
    printf("%d\n",i);
  }
  printf("Reverse order of above numbers:\n");
  for(int i=100;i>=0;i--)
  {
    printf("%d\n",i);
  }
  return 0;
}
