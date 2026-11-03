#include<stdio.h>
#include<stdlib.h>

int *ptr, candidate_count,choice,mode;

int main(){

 
    printf("Enter the number of the people:");

    scanf("%d",&candidate_count);

    printf("Your canditates' index number are:");
    
    for(int loop1 = 0; loop1 < candidate_count; loop1++){
        printf("%d",loop1);
        if(loop1 == candidate_count-1)break;
        printf(", ");

    }
    printf("\ntype -1 to count the votes\n");
    printf("\n");
    ptr = calloc(candidate_count,sizeof(int));
    
    while(1){
        printf("whom you want to vote:");
        scanf("%d",&choice);

        if(choice== -1) break;

        else if(choice >= 0 && choice <candidate_count){
            ptr[choice]++;
        }
        else {
            printf("ERROR///NO CANDIDATE!\n");
        }
       

        
    }
    printf("\n");



  
    for(int candidate = 0,loop2 = 0; loop2 < candidate_count; loop2++,candidate++){
        printf("Total votes for candidate %d : %d\n",candidate,ptr[loop2]);
    
    
    }



    return 0;
}