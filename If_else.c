#include<stdio.h>
int main()
{
    int a,c;
    printf("Enter the number\n");
    scanf("%d",&a);
   
   if( a % 2==0){
       printf("%d This is an even function\n",a);
   }

   else{
       printf("%d This is an odd function\n",a);
       }
    return 0;
   
}