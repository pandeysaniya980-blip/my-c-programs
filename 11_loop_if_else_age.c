#include<stdio.h>

int main()
{
    
    int age;
    printf("Enter age :");
    scanf("%d",&age);

    if(age>=18){
        printf("adult\n");
    }
    else if(age>=13){
        printf("teenage\n");
    }
    else{
        printf("child");
    }
    return 0;
}
