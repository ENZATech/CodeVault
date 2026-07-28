#include<stdio.h>
int main ()
{
    int age;

    printf("Type your age:");
    scanf("%d", &age);


    if(age>15)
    {
        printf("Your age is greater than 15\n");
    }
    else{
        printf("Your age is not greater than 15\n");
    }

    if(age>5)
    {
        printf("Your age is greater than 5\n");
    }
    else{
        printf("Your age is not greater than 5\n");
    }

    
    if(age%2==0)
        {
            printf("Your age is divisible by 2\n");
        }

    if(age%3==0)
        {
            printf("Your age is divisible by 3\n");
        }

    if(age%4==0)
        {
            printf("Your age is divisible by 4\n");
        }

    if(age%5==0)
        {
            printf("Your age is divisible by 5\n");
        }

// 
    
    return 1;
}