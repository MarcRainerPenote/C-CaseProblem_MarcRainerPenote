#include <stdio.h>

int main()  { 

    printf("Name: Marc Rainer Penote\n");
    printf("School ID: 2025304409\n");

    printf("\n_____________________\n");
    int grade;

    printf("Input your Grade: ");
    scanf("%d", &grade);


 if (grade >= 100) {
    printf("YOU PASSED! GREAT WORKKK! ");   

 }else if (grade >=75 && grade < 100) {
   printf("YOU PASSED!");
           
 }else 
   printf("SORRY, YOU FAILED!\n");
           
}