#include<stdio.h>
#include<conio.h>
#include<string.h>
int  main(){

   
    char x[5];
    x[0]=getch();
    x[1]=getch();
    x[2]=getch();
    x[3]=getch();
    if(strcmp(x,"1467")==0){
        printf("CORRECT PASSWORD, YOU'VE ENTERED.");
    }    
    else{
            printf("INCORRECT!try again later");
    }

    return 0;
}