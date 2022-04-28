#include<stdio.h>

#include<conio.h>

#include<string.h>

#define SIZE 20

struct bookdetail

{
          int accNo[20];

          char name[20];

          char author[20];

          int pages;

          float price;

};

void output(struct bookdetail v[],int n);

void main()

{

          struct bookdetail b[SIZE];

          int n,i;

          
          printf("Enter the Numbers of Books:");

          scanf("%d",&n);

          printf("\n");

          for(i=0;i<n;i++)

          {

                   printf("\t=:Book %d Detail:=\n",i+1);

                   printf("\nEnter the Accession Number:\n");

                   scanf("%d",&b[i].accNo);

                   printf("\nEnter the Book Name:\n");

                   scanf("%s",&b[i].name);

                   printf("Enter the Author of Book:\n");

                   scanf("%s",&b[i].author);

                   printf("Enter the Pages of Book:\n");

                   scanf("%d",&b[i].pages);

                   printf("Enter the Price of Book:\n");

                   scanf("%f",&b[i].price);

          }

          output(b,n);

          getch();

}

void output(struct bookdetail v[],int n)

{

          int i,t=1;

          for(i=0;i<n;i++,t++)

          {

                    printf("\n");

                   printf("Book No.%d\n",t);

                   printf("\t\tBook %d Accession number is=%d \n",t,v[i].accNo);

                   printf("\t\tBook %d Name is=%s \n",t,v[i].name);

                   printf("\t\tBook %d Author is=%s \n",t,v[i].author);

                   printf("\t\tBook %d Pages is=%d \n",t,v[i].pages);

                   printf("\t\tBook %d Price is=%f \n",t,v[i].price);

                    printf("\n");

          }

}