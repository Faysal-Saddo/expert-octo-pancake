#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,i;
    printf("Enter the size: ");    
    scanf("%d",&y);

    int* pointer_memory = malloc(y*sizeof(int));
    if(pointer_memory == NULL){
        exit(1);
    }

    for(i=0;i < y; i++){

        scanf("%d",(pointer_memory + i));

    }

    for(i=0;i < y; i++){

        printf("%d ",pointer_memory[i]);

    }
    int y2;

    printf("\nEnter new size:");
        scanf("%d",&y2);

    int* pointer_memory1 = realloc(pointer_memory,y2*sizeof(int));
    if(pointer_memory == NULL){
        exit(1);
    }

    for(i=0;i < y2; i++){

        scanf("%d",(pointer_memory1 + i));

    }

    for(i=0;i < y2; i++){

        printf("%d ",pointer_memory1[i]);

    }




    free(pointer_memory); 
    return 0;
}