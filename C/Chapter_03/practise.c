#include<stdio.h>
    int main(){
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;

        printf("Enter First number: ");
        scanf("%d", &a);

        printf("Enter Second number: ");
        scanf("%d", &b);

        printf("Enter third number: ");
        scanf("%d", &c);

        printf("Enter fourth number: ");
        scanf("%d", &d);

        printf("Enter fifth number: ");
        scanf("%d", &e);

        printf("Enter sixth number: ");
        scanf("%d", &f);

        printf("Enter seventh number: ");
        scanf("%d", &g);

/*      if(a>b && a>c && a>d && a>e && a>f && a>g){
            
        }
        else if(b>c && b>d && b>e && b>f && b>g && b>a){

        }
        else if(c>d && c>e && c>f && c>g && c>a && c>b){

        }
        else if(d>e && d>f && d>g && d>a && d>b && d>c){

        }
        else if(e>f && e>g && e>a && e>b && e>c && e>d){

        }
        else if(f>g && f>a && f>b && f>c && f>d && f>e ){

        }
        else if(g>a && g>b && g>c && g>d && g>e && g>f){

        }
*/
        if(a%b>1 || b%c>1 || c%d>1 || d%e>1 || e%f>1 || f%g>1 || g%a>1 && a%c>1 || b%d>1 || c%e>1 || d%f>1 || e%g>1 || f%a>1 || g%b>1 && a%d>1 || b%e>1 || c%f>1 || d%g>1 || e%a>1 || f%b>1 || g%c>1 &&a%e>1 || b%f>1 || c%g>1 || d%a>1 || e%b>1 || f%c>1 || g%d>1 && a%f>1 || b%g>1 || c%a>1 || d%b>1 || e%c>1 || f%d>1 || g%e>1 && a%g>1 || b%a>1 || c%b>1 || d%c>1 || e%d>1 || f%e>1 || g%f>1){
            printf("The largest number is: ");
        }
        else{
        printf("nothing found");
        }

    }
    //To be continued... 