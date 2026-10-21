#include<stdio.h>
int sort(int [], int , int);
int location(int [], int , int);

int sort(int a[], int n, int t){
    int temp;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i] >  a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    location(a, n, t);
}

int location(int a[], int n, int t){
    int b[n];
    int j=0;

    for(int i=0; i<n; i++){
        if(a[i] == t){
            b[j] = i;
            j++;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d", b[i]);
    }
}

int main(){
    int x[10];
    int t;
    int n=0;

    printf("Enter the array: \n");

    for(int i=0; i<10; i++){
        printf("Enter (0 to end): ");
        scanf("%d", &x[i]);
        
        if(x[i]==0){
            n--;
            break;
        }
        n++;
    }

    printf("Enter the target value: ");
    scanf("%d", &t);

    sort(x, n, t);

    return 0;
}

// Not Working due to illiteracy.