#include<stdio.h>
int main()
{
    char a;
    printf("enter a character\n");
    scanf("%c",&a);

    if (a=='a'||a=='e'|| a=='i'||a=='o'||a=='u'||
    a=='A'||a=='E'|| a=='I'||a=='O'||a=='U')
    {
        printf("It is a vowel %c",a);
    }
    else
    {
        printf("Its is a consonant %c",a);
    }
    return 0;
}