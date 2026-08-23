#include<stdio.h>

void good_morning();
void good_afternoon();
void good_evening();

void good_morning(){
    printf("Good Morning \n");
}
void good_afternoon(){
    printf("Good Afternoon \n");
}
void good_evening(){
    printf("Good Evening \n");
}

int main(){
    good_morning(); // Function Calling.
    good_afternoon(); // Function Calling.

    return 0;
}