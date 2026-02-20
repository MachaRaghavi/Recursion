//printing eacha and every value in given number .
#include<stdio.h>
void digit(int a)
{
    if(a==0){
        return;
    }
    int num=a%10;
    printf("%d \n",num);
    a=a/10;
    digit(a);
}
void main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    digit(a);
}