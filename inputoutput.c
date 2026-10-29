#include<stdio.h>
#include<conio.h>
int main() {
    
   char ch ;

   ch = getche();
  if(ch == '4'){
    printf("enter your numbers:");
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",x+y);

  }
  else {

    printf("NOOO");
  }
    
    
    return 0;
}