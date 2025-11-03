#include <stdio.h> 
 
int main() { 
char status; 
char choice; 
 
printf(" Chess Status Check Program \n"); 
printf("---------------------------------\n"); 
 
do { 
printf("\nEnter the current status of the King:\n"); 
printf("C - Check\nM - Checkmate\nS - Safe\n"); 
printf("Your choice: "); 
scanf(" %c", &status); 
 
if (status == 'C' || status == 'c') { 
printf("\n King is in CHECK! Be careful and plan your next move.\n"); 
} 
else if (status == 'M' || status == 'm') { 
printf("\n King is in CHECKMATE! Game over.\n"); 
} 
else if (status == 'S' || status == 's') { 
printf("\n King is SAFE! You can continue your move confidently.\n"); 
} 
else { 
printf("\n Invalid input! Please enter only C, M, or S.\n"); 
} 
 
printf("\n Do you want to check another status? (Y/N): "); 
scanf(" %c", &choice); 
 
} while (choice == 'Y' || choice == 'y'); 
 
printf("\n Thank you for using the Chess Status Checker!\n"); 
printf(" Good luck with your next move!\n"); 
 
return 0; 
} 
 