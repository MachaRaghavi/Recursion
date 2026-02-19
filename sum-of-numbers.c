// To print the sum of numbers from m to n using recursion.
#include<stdio.h>
int add(int i,int n,int sum)
{
if(i>n)
{
return sum;
}
sum=sum+i;
 return add(i+1,n,sum);
}
int main(){
int m,n;
int sum=0;
printf("Enter the value of m:\n");
scanf("%d",&m);
printf("Enter the value of n:\n");
scanf("%d",&n);
int res=add(m,n,0);
printf("res=%d",res);
return 0;
}