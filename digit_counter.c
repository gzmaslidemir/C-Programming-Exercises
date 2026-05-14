#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num;
    int counter = 0;
    
    //Ask user for input
    
    printf("Enter an integer that is 5 digits or less:" );
    scanf("%d", &num);
    
    //Make the number positive
    if (num < 0) {
        num = -num;
    }
    
    if (num > 99999){
        printf("Number must be 5 digits or less.");
        return 1;
   }
   
   //Check each number digit separately (max 5 digits)

    if(num / 10000 == 9 ){
        counter+=1;
    }
    if(num / 1000 % 10 == 9){
        counter+=1;
    }
    if(num / 100 % 10 == 9){
        counter+=1;
    }
    if(num / 10 % 10 == 9){
        counter+=1;
    }
    if(num % 10 == 9){
        counter+=1;
    }
  
   
   printf("Number of 9s: %d", counter);
   return 0;
}
