#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int *ptr, candidate_count,choice;
char mode;
int main(){

    printf("1.new vote\n2.see previous result\nselect your mode:");
    mode = getche();

    if (mode == '1'){
 
    printf("\nEnter the number of the candidates:");

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

    printf("\nPress S to save the record\n");
    char save;

    save = getch();

    if(save == 's'|| save == 'S'){

        FILE * file_ptr = fopen("Vote_history.txt","w");
        
        if (file_ptr == NULL){
           exit(1);
    }

    
         for(int candidate = 0,loop2 = 0; loop2 < candidate_count; loop2++,candidate++){
            fprintf(file_ptr,"Total votes for candidate %d : %d\n",candidate,ptr[loop2]);
            
    }
    printf("\nSaved.\n");

    }
}
    

     else if(mode == '2'){

            char ch[10000];
            int str=0;
    FILE * ptr22 = fopen("vote_history.txt","r");
 
    if (ptr22 == NULL){
        exit(1);
    }
    else{
            while((ch[str]=fgetc(ptr22))!= EOF){

                str++;

    }
    

    }
    printf("\n");
    for(int i=0;i<str;i++){
        printf("%c",ch[i]);
    }
    printf("\n");
          
    }
    





    return 0;
    
}