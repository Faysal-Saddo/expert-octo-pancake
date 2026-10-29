
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char ch[10000];
    int x=0;
    FILE * ptr = fopen("abc2.txt","r");
 
    if (ptr == NULL){
        exit(1);
    }
    else{
            while((ch[x]=fgetc(ptr))!= EOF){

                x++;

    }
    ch[x]='\0';
    FILE * ptr2 = fopen("copied.txt","w");
    
    if (ptr2 == NULL){
        exit(1);
    }

        fputs(ch,ptr2);

  

        fclose(ptr);
        fclose(ptr2);
    }

    printf("%d",strlen(ch));    

    return 0;
} 
