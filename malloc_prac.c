#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,i;
    printf("Enter the size: ");    
    scanf("%d",&y);



    int* pointer_memory = malloc(y*sizeof(int));
    if(pointer_memory == NULL){
        return 1;
    }

    for(i=0;i < y; i++){

        scanf("%d",(pointer_memory + i));

    }
    for(i=0;i < y; i++){

        printf("%d ",pointer_memory[i]);

    }

    free(pointer_memory);4
    return 0;
}