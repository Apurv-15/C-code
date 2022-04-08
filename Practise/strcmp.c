#include<stdio.h>
#include<string.h>
void main()
{
    char s1[20]="Hello C programer";
    char s2[200]="Hello programer";

    if(strcmp(s1,s2)==0)
    {
        printf("String 1 and 2 are equal ");
    }
    else{
         printf("String 1 and 2 are different ");
    }
    
}