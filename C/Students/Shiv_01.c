#include<stdio.h>
int main(){
    int grid[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    int (*p)[4]  = grid;
    p++;

    int *ptr = (int *)(p + 1);
    printf("%d \n", *(ptr-2));

    return 0;
}