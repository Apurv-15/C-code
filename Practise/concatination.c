#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50];
    char s2[50];
    printf("Enter the character u want\n");
    scanf("%s",s1);
    printf("Enter the 2nd  character u want\n");
    scanf("%s",s2);

    strcat(s1,s2);

    printf("Concatenated String: %s\t",s1);
}