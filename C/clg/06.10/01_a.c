//Adding two numver using pointers;
#include<stdio.h>

int sum(int *, int *);
int sum(int *a, int *b){
    return *a + *b;
}

int main(){
    int x;
    int y;

    int *ptr_1;
    int *ptr_2;

    printf("Enter First number: ");
    scanf("%d", &x);

    ptr_1 = &x;

    printf("Enter Second number: ");
    scanf("%d", &y);

    ptr_2 = &y;

    printf("The sum of given numbers is: %d\n", sum(ptr_1, ptr_2));

    printf("The sum of given numbers is: %d\n", sum(&x, &y));   //The above line can also be written as this.
    

}