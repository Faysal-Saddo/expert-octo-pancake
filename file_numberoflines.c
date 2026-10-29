
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char ch;
    int x=1;
    FILE * ptr = fopen("abc.txt","r");
    
    if (ptr == NULL){
        exit(1);
    }
    else{
            while((ch=fgetc(ptr))!= EOF){

        if(ch == '\n'){
            x++;
        }

    }

        printf("the number of lines %d",x);

  

        fclose(ptr);
    }


    return 0;
} 
