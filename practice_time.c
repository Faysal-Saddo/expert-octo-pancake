#include<stdio.h> 
#include<time.h>

int main(){
    clock_t start_time = clock();
       int x =1 ;
    while(x<=50000){
 
    printf("%u\n",x);
        x = x+1;
    
    }
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Total execution time: %.4f seconds\n", elapsed_time);
    return 0;
}