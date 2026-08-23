#include<stdio.h>
float avg(int, int, int);

float avg(int c, int a, int b){
    return (a+b+c)/3.0;
}

int main(){
    int p;
    int q;
    int r;

    printf("Enter a number: ");
    scanf("%d", &p);
    printf("Enter a number: ");
    scanf("%d", &q);
    printf("Enter a number: ");
    scanf("%d", &r);

    float d = avg(p, q, r);
    printf("The average of these number is: %f \n", d);
    
    int p2;
    int q2;
    int r2;

    printf("Enter a number: ");
    scanf("%d", &p2);
    printf("Enter a number: ");
    scanf("%d", &q2);
    printf("Enter a number: ");
    scanf("%d", &r2);

    float d2 = avg(p2, q2, r2);
    printf("The average of these number is: %f \n", d2);

    int p3;
    int q3;
    int r3;

    printf("Enter a number: ");
    scanf("%d", &p3);
    printf("Enter a number: ");
    scanf("%d", &q3);
    printf("Enter a number: ");
    scanf("%d", &r3);

    float d3 = avg(p3, q3, r3);
    printf("The average of these number is: %f \n\n", d3);
    
    // Now.

    printf("Now we will calculate the average of these averages. \n");
    float x = avg(d, d2, d3);
    printf("The average of these averages is: %f \n\n", x);
    
    return 0;
}