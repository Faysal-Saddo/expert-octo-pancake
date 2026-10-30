#include<stdio.h>
#include<stdlib.h>

int main(){
    int x = 0,*ptr,size_arr;
    printf("ENter the size:");
    scanf("%d",&size_arr);
    
    ptr = malloc(size_arr*sizeof(int));

    if(ptr == NULL){
        printf("ERROR\\\\malloc");
        free(ptr);
        exit(1);
    }
    do{
        scanf("%d",(ptr+x));
        x++;
    }while(x<size_arr);

    for(x = 0; x< size_arr;x++){

        printf("%d",*(ptr +  x));
    }

    return 0;
}