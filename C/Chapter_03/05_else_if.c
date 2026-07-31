#include<stdio.h>
int main()
    {
        int age;

        printf("Type your age: ");
        scanf("%d", &age);

        if (age>60){
            printf("You can drive and you are a senior citizen");
        }
        else if (age>18){
            printf("You can drive");
        }
        else {
            printf("You cannot drive");
        }
    }