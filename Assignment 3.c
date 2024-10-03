/*
//programme to implement the eligibility of a customer to be given a loan by a bank 
Author: Maxwell Gathara
Date:24/09/2023
*/
//preprocessor directive 
#include<stdio.h>
int main(){
  int age;
  float income;
  //prompt age of customer 
  printf("Enter customer's age:");
  scanf("%d",&age);
  //prompt the customer's income
  printf("Enter the annual income in sh:");
  scanf("%f",&income);
  //check eligibility 
  if(age>=21 & income>=21000)
  {
       printf("congratulations you are eligible for the loan.\n");
  }else{
       printf("sorr, you are not eligible for the loan\n");
  }
return 0;
}