#include<stdio.h>
#include<string.h>
#include<conio.h>
 void main()
 {  char str1[30];
    char str2[30];
    char ch;
    
    printf("Enter first String\n");
    gets(str1);
    printf("Enter Second String\n");
    gets(str2);

    printf("Length of first string is %d \n",strlen(str1));
    printf("Length of second string is %d \n",strlen(str2));

    printf("Strings before copying are:\nStr1: %s \n Str2:  %s  \n",str1,str2);
    strcpy(str1,str2);
    printf("String Str1 after copying is: %s \n",str1);

    strcat(str1,str2);
    printf("Strings after concatenation Str1: %s \n str2: %s \n",str1,str2);

   printf("enter a character to search in Str1: %s\n",str1);
   ch= getche();
   if(strchr(str1,ch)==0)
   printf("\ncharacter not found\n %s", strchr(str1,ch) );
   else
   printf("\ncharacter found\n %s", strchr(str1,ch));
 
  }