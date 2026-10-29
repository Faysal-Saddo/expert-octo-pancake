
#include <stdio.h>
void cheese(int number1, int number2);

int main() {

    int num1,num2; 
    scanf("%d %d",&num1 ,&num2);
    cheese(num1,num2);



    return 0;
}


void cheese(int number1, int number2){

    printf("%d+%d=%d",number1,number2,number1+number2);
    
}