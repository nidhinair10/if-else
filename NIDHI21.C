#include<stdio.h>
#include<conio.h>
int main ()
{
int a,b,c;
printf("enter two numbers");
scanf("%d%d%d",&a,&b);
//finding largest
if (a>=b)
{
printf (" largest=%d\n",a);
}
else
{
printf("largest=%d\n",b);
}
return 0;
}
