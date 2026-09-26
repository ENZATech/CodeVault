// second largest value using array;
#include<stdio.h>
int sec_max(int [], int );
int sec_max(int a[], int n){
    int max;

    for(int i=0; i<n; i++){ 
        for (int j=0; j<n; j++){
            if(a[i]<a[j]){
                max=a[i];
            }
        }
    }

    int sec_max;
    for(int i=0; i<n; i++){
        if(max){
            
        }

    }

    printf("%d", a[]);

}

int main(){
    int x[100];
    int n;

    printf("Enter the numbers (0 to exit): \n");
    for(int i=0; i<100; i++)
    {
        printf("Enter: ");
        scanf("%d", &x[i]);
        if(x[i]==0){
            i--;
            break;
        }
        n=i+1;
    }

    sec_max(x, n);

    return 0;
}