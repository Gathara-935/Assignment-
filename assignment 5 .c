/*
//program to calculate the fine for overdue library books 
Author: Maxwell Gathara 
Adm:CT101/G/22271/24
Date:29/09/2024
*/
//preprocessor directive 
#include<stdio.h>
int main(){
int bookID,dueDate, returnDate, daysOverdue, fineRate;
int fineAmount;
printf("Enter Book ID\n");
scanf("%d",&bookID);
printf("Enter Due Date\n");
scanf("%d",&dueDate);
printf("Enter Return Date\n");
scanf("%d",&returnDate);
//calculate daysOverdue 
daysOverdue=returnDate-dueDate;
if(daysOverdue<=7||daysOverdue>=0){
fineRate=20;}
else if(daysOverdue<8||daysOverdue<=14){
fineRate=50;}
else if(daysOverdue>=50){
fineRate=100;}
//calculate fine amount 
fineAmount=daysOverdue*fineRate;
 printf("Book ID=%d",bookID);
 printf("Due Date=%d",dueDate);
 printf("Return Date=%d", returnDate);
 printf("Days Overdue=%d",daysOverdue);
 printf("Fine Rate=%d", fineRate);
 printf("Total Fine Amount=%d", fineAmount);
return 0;
}