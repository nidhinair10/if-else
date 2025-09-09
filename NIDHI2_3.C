#include<stdio.h>
#include<conio.h>
int main ()
{
int a,b,c,d;
printf("enter gross salary a");
scanf("%d",&a);
//Finding net salary
if(a>10000)
{
c=0.1*a;
d=0.03*a;
}
else if (a>5000)
{
c=0.07*a;
d=0.02*a;
}
else
{
c=0;
d=0;
}
b=a+c-d;
printf("net salary=%d\n",b);
return 0;
}
