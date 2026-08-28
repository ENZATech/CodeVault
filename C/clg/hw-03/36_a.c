#include<stdio.h>
int main(){
    int callCount;
    int y=0;
    int z=1;
    int a;

    printf("Enter the number of terms to generate Fibonaci sequence: ");
    scanf("%d", &callCount);

    for(int n = 1; n<=callCount; n++){
        printf("%d \n", y);
        a=y+z;
        y=z;
        z=a;
    }
}