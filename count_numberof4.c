#include<stdio.h>
int main(){

    int input,y,i=0;
    scanf("%d",&input);
    while(input > 0){
        if(input%10 == 4){
            i++;
        }
        input = input/10;
    }
    printf("%d",i);


    

    return 0;
}