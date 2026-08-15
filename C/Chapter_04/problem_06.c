#include<stdio.h>
    int main(){
        int x = 0;
        int y;
        float sum = 0;
        int n;

        for(int n=1; n<=5; n++){
            printf("Enter Temp of sensor %d: ", n);
            scanf("%d", &y);
            sum = sum + y;

        }
        printf("The average temp of all sensors is %f.", sum/5);


        return 0;
    }