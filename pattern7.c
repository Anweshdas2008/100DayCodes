/* Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
 */

#include <stdio.h>

int main(){
  int total_groups = 5;
  int stars;
  
  for(int i = 1; i <= total_groups; i++){
    if(i <= 3){
      stars = 2 * i - 1;
    } else{
        stars = 2 * (6 - i) - 1;
    }
    for(int j = 0; j < stars; j++){
      printf("*\n");
    }
    if(i < total_groups){
      printf("\n");
    }
    }
  return 0;
}

