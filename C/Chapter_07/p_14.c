#include<stdio.h>

//Occurence Counter;

int count(int [], int);
int count(int a[], int n){
    
    for(int i=0; i<n+1; i++)
    {
        int rep=0;
        for(int j=0; j<n+1; j++)
        {
            if(a[i]==a[j]){
                rep++;
            }
            else{
                continue;
            }
        }
        printf("%d = %d \n", a[i], rep);
    }
}

int main(){
    int x[100];

    int n;
    for(int i=0; i<100; i++){
        printf("Enter the number (0 to stop): ");
        scanf("%d", &x[i]);

        if(x[i]==0){
            break;
        }
        n=i;
    }

    count(x, n);

    return 0;
}