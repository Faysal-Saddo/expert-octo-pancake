#include<stdio.h>
int main(){
    int x=1;
   do{
     if(x==3){
        x++;
        continue;
     }
     
    printf("%d\n",x);
    x++;
    }while(x<=5);
    
    return 0;
}