
#include <stdio.h>

int factorial(int input){

    if(input == 1){
        return 1;
    }
    else{
        return input*factorial(input-1);
    }
    
}

int main() {
    printf("put a number: ");
    short int input_var;
    scanf("%hi",&input_var);
    /*
    unsigned int fact_result=factorial(input_var);*/
// its better to use long int except of unsigned char
    
    long fact_result=factorial(input_var);
    printf("Factorial= %ld\n\n",fact_result);
    printf("size_input %zu bytes \nsize_output %zu bytes",sizeof(input_var),sizeof(fact_result));
    

    return 0;
}