#include<stdio.h>

int main()
{
    
    int cp,sp;
    printf("Enter cost price :");
    scanf("%d",&cp);
    printf("Enter selling price :");
    scanf("%d",&sp);

    if(sp>cp){
        printf("profit\n");
    }
    else if(sp<cp){
        printf("loss\n");
    }
    else{
        printf("no profit,no loss");
    }
    return 0;
}
