//Practical 13 b) Write a C program to demonstrate Mathematical Functions
#include<stdio.h>  
#include <math.h>    
#include<conio.h>
int main(){  
double val,res,angle;

printf("\n%f",ceil(3.6));
printf("\n%f",ceil(3.3));    
printf("\n%f",floor(3.6));    
printf("\n%f",floor(3.2));    
printf("\n%f",sqrt(16));    
printf("\n%f",sqrt(7));    
printf("\n%f",pow(2,4));    
printf("\n%f",pow(3,3));    
printf("\n%d",abs(-12));

val=100.0;
res=log(val);
printf("\nlog(%lf)= %lf \n" ,val,res);  
res=log10(val);
printf("\nlog10(%lf)= %lf \n" ,val ,res);  

angle= 45*3.142/180;
printf("\ncos (%lf) is %lf",angle, cos(angle));
printf("\nsin (%lf) is %lf",angle, sin(angle));
printf("\ntan (%lf) is %lf",angle, tan(angle));
getch();
 
 return 0;    
} 