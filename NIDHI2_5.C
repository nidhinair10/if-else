#include<stdio.h>
#include<conio.h>
int main ()
{
int a,b,c;
printf("enter gross sales a");
scanf("%d",&a);
//Finding sales
if(a>20000)
{
c=0.15*a;
}
else if (a>10000)
{
c=0.10*a;
}
else
{
c=0.05*a;
}
b=a-c;
printf("net sales=%d\n",b);
return 0;
}
