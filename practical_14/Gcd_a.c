#include<stdio.h>
int gcd(int n1, int n2)
{
    while(n1!=n2)
    {
        if(n1>n2){
            n1-=n2;
        }
        else{
            n2-=n1;
        }
    }
    return n1;
}
void main(){
    int n1,n2,temp;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&n1,&n2);

    n1=(n1>0)? n1:-n1;
    n2=(n2>0)? n2:-n2;

    temp=gcd(n1,n2);

    printf("GCD=%d",temp);
    

}