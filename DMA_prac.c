#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr,x=0,y;
    
    ptr =  (int*)malloc(20);

    for(x=0;x< 5;x++){
        scanf("%d",&ptr[x]);
    }
    for(x=0;x< 5;x++){
        printf("%d",ptr[x]);
    }
    free(ptr);

    ptr = (int*)realloc(NULL,4*sizeof(int));

    for(x=0;x< 4;x++){
        scanf("%d",&ptr[x]);
    }
    for(x=0;x< 4;x++){
        printf("%d",ptr[x]);
    }
    free(ptr);




    return 0;
}