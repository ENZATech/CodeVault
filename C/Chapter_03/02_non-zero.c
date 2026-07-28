#include <stdio.h>

    int main()
    {

        if(1){
            printf("This if is executed!\n");
        }

        if(2345){
            printf("This if is also executed!\n");
        }

        if(2.45){
            printf("checking if this decimal number command execute or not!\n");
            //This command will not execute.!        
        }

        if('c'){
            printf("checking if this char command execute or not!\n");
            //This command will not execute.!        
        }

        if(0){
            printf("checking if this command execute or not!\n");
            //This command will not execute.!     
            //All non-zero command will execute!   
        }

        
        

        return 0;
    }