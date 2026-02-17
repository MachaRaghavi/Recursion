#include<stdio.h>
void factor(int i,int a)
{
    if(i>a)
    {
    return;
    }
    if(a%i==0){
    printf("%d is a factor",i);
    }
    factor(i+1,a);
}
void main()
{
int a;
printf("Enter a number\n");
scanf("%d",&a);
factor(1,a);
}