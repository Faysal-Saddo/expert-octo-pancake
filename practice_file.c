
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[200],H='H';
    FILE * ptr = fopen("abc.txt","r+");
    
    if (ptr == NULL){
        exit(1);
    }
    else{
   

    fseek(ptr,0,SEEK_END);
    

    int pos = ftell(ptr);
    printf("%d",pos);
    
}
    
   

  

    fclose(ptr);
    return 0;
} 
