#include<stdio.h>
int main()
{
  char day; //m-monday,t-tuesday,w-wednwsday,T-thursday,f-friday,s-saturday,u-sunday
  printf("enter day(1-7):");
  scanf("%s",&day);
  switch(day){
    case 'm': printf("monday\n");
              break ;
    case 't': printf("tuesday\n");
              break ;
    case 'w': printf("wednesdaqy\n");
              break;
    case 'T': printf("thursday\n");
              break ;
    case 'f': printf("friday\n");
              break ;
    case 's': printf("saturday\n");
              break ;
    case 'u': printf("sunday\n");
    default: printf("not a valid day");                                                            
  } 
 return 0;
}
