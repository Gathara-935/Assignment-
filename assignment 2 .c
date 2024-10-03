/*
//program to calculate simple and compound interest
Author: Maxwell Gathara
Date:24/09/2023
*/
//preprocessor directive
#include<studio.h>
#include<math>
int main(){
   float principal,rate,time,si,ci
   printf("enter principal amount");
   scanf("%f"& principal);
   printf("enter rate");
   scanf("%f"&rate);
   printf("enter time in years");
   scanf("%f"&time);
   //calculating simple interest
   si=(principal*time*rate)/100;
   printf("simple interest:.2f\n", simple interest);
   //calculating compound interest
   printf("enter number of times the interest is compounded per year");
   scanf("%d",&n);
   ci=principal*pow((1+rate/(n*100)),(n*time))-principal;
   printf("compound interest:.2f\n",ci);
   return 0;
   
}
    