#include<stdio.h>

int main()
{
    
    int age;
    printf("Enter age :");
    scanf("%d",&age);
    if(18<=age){
        printf("adult");
    }
    else if(15<=age){
        printf("teenage");
    }
    else{
        printf("children");
    }
    return 0;
}
