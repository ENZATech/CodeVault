#include<stdio.h>
    int main (){
        int a;
        int b;
        int c;
        int d;

        printf("Enter your salary: ");
        scanf("%d", &a);

        if (a>=250000)
            if (a>=250000 && a<=500000){
                b = a*5 / 100;
                printf("You have to pay 5%% income tax i.e., %d", b);
            }
            else if (a>500000 && a<1000000){
                c = a * 20 / 100;
                printf("You have to 20%% income tax i.e., %d", c);
            }
            else {
                d = a * 30 / 100;
                printf("You have to pay 30%% income tax i.e., %d", d);
            }

        else{
            printf("You are poor man! Earn more to pay income tax.");
        }

        return 0;
        }