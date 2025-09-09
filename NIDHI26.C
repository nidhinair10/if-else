#include <stdio.h>
int main ()
{
int a,b,c,sum,avg;
printf("enter marks of three subjects");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
avg=sum/3;
if(a<35||b<35||c<35)
{
printf("fail");
}
else
{
printf ("sum,avg=%d\n",sum,avg);
if(avg>=70)
printf("grade- distinction");
else if (avg>=60)
printf("grade-first class");
else if (avg>=50)
printf("grade-second class");
else if (avg>=35)
printf("grade-third class");
else
printf("fail");
}
return 0;
}
