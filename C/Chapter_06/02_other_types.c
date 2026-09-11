#include<stdio.h>
int main(){
    char i = 56;
    char* j = &i;

    float k = 5.235;
    float* l = &k;
    float** m = &l;

    printf("%d \n",  j);
    printf("%d \n", &j);
    printf("%d \n", &i);
    // printf("%d \n", *i);     This statement is wrong but don't know why.!!

    printf("%d \n", &k);
    printf("%d \n", *l);
    printf("%d \n", l);
    printf("%d \n", &m);
    printf("%d \n", m);

    return 0;
}