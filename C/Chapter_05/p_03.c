#include<stdio.h>
float ctf(int);

float ctf(int a){
    return (9*a/5+32);
}

int main(){
    float x;

    printf("Enter the temp in Celsius: ");
    scanf("%f", &x);

    printf("%f is the degree in farenheit.", ctf(x));
    return 0;
}