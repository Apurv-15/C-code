#include<stdio.h>
int main()
{

    int i = 0, len, flag = 1;
    char a[30], b[30];

    printf("Enter a string \n");
    scanf("%s", &a);
    while (a[i] != '\0')
    {
        i++;
    }

    len = i;
    for (i = 0; i <= len - 1; i++) 
    {
        b[i] = a[len - 1 - i];
    }
    for (i = 0; i <= len - 1; i++) 
    {
        if (a[i] != b[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {

        printf("The string is a palindrome \n");
    }
    else
    {
        printf("The string is not a palindrome \n");
    }
    return 0;
}