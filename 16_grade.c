#include<stdio.h>

int main()
{
    int e,h,m,p,c,marks, percentage;
    printf("enter marks english(0-100) :");
    scanf("%d",&e);
    printf("enter marks hindi(0-100):");
    scanf("%d",&h);
    printf("enter marks maths(0-100) :");
    scanf("%d",&m);
    printf("enter marks physics(0-100) :");
    scanf("%d",&p);
    printf("enter marks chemistry(0-100) :");
    scanf("%d",&c);

    marks=e+h+m+p+c;
    printf("%d\n",marks);
    percentage=(marks*100)/500;
    printf("Percentage: %d\n",percentage);

    if(percentage>=80 && percentage<=100){
        printf("Grade A+\n");
    }
    else if(percentage>=70 && percentage<90){
        printf("Grade A\n");
    }
    else if(percentage>=60 && percentage<70){
        printf("Grade B\n");
    }
    else if(percentage>=33 && percentage<60){
        printf("Grade C\n");
    }
    else{
        printf("Grade F-Fail");
    }
    return 0;
} 
