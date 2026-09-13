#include<stdio.h>

float area(int );
float circ(int );

float area(int a){
    return (3.14*a*a);
}

float circ(int b){
    return (2 * 3.14 * b);
}

int main(){
    int x;

    printf("Enter the value of radius: ");
    scanf("%d", &x);

    printf("The area of circle of given radius is: %f\n", area(x));
    printf("The circumference of circle with given radii is: %f\n", circ(x));

    return 0;
}