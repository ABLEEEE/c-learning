#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1
/*
int main ()
{
    int n=1;
    double xn =0,sum=0;
   for( n=1;(2*n+1)/(pow(2*n,2))>=pow(10,-3);n++)
   {
       xn=(2*n+1)/(pow(2*n,2));
       sum+=pow(-1,n-1)*xn;
   }
   printf("%lf\n",sum);
    return 0;
}
*/
//2
/*
int main ()
{

    for(int i=2;i<=2000;i++)
    {
        int sum=1;
        for(int j=2;j<=i/2;j++)
        {

            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(i==sum)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
*/
//3
/*
double f (double n )
{
    return (pow(n,3)+2*n-5);
}
int number(double n)
{
    int i=1;
    for (i=1;i<=5;i++)
    {
        double x=n*pow(10,i);
        double a =fmod (x,1);
        if(a==0)
            {return (i);
            break;
            }
    }
return ;
}
int main ()
{
    double left=-1;
    double right=2;
    double  mid =0.5;
    while (number(mid)<=5)
    {
       mid =(left+right)/2;
        if (f(mid)>0)
        {
            right=mid;
        }
        else if (f(mid)<0)
        {
            left=mid;
        }
    }
    printf("%.4f",mid);
    return 0;
}
*/
///4
/*
void s_printf(int n,int i)
{
    while (i>=65)
    {
    if (n>=65)
   {
       printf("%c",n);
           s_printf(n-1,i-1);
              i--;
              break;
   }
   i--;
    }
}
int main ()
{
    char b='\0';
    scanf("%c",&b);
    int a=(int)b;
    for (int i=a;i>=65;i--)
    {
        s_printf(a,i);
        printf("\n");
    }
    return 0;
}
*/
//or
/*
int main ()
{
    char b='\0';
    scanf("%c",&b);
    int a=(int)b;
    for (int i=a;i>=65;i--)
    {
        printf("%c ",a);
        for(int j=a-1;j>=i;j--)
        {
            printf("%c ",j);
        }
    printf("\n");
    }
    return 0;
}
*/
///5
/*
int main ()
{
    double sum=100;
    double a =0;
    int year =1;
    while (sum>0)
    {
       if(year>=2&&sum>=10)
       {
           sum-=10;
           a+=10;
       }
       else if (year>=2&&sum<10)
       {
           a+=sum;
           break;
       }
       sum*=1.08;
       year++;
    }
    printf("After %d years Jack has no money !\n",year-1);
    printf("Jack took out %lf $ altogether",a);
    return 0;
}
*/
///6

int f (int n)
{
    int sum=0;
    for ( ;n>0;n--)
    {
        sum+=n;
    }
    return (sum);
}
int sum (int n)
{
    int a=0;
    do
    {
    a+=pow(n,2);
    n--;
    }
    while (n>0);
    return a;
}
int main ()
{
do
{

    int n=0;
    int i=1;
    int b=0;
    scanf("%d",&n);
for ( i=1;i>0;i++)
{
    if (f(i)>n)
    {
        break;
    }
}
int s= sum (i-1);
if(f(i-1)-n!=0)
{
b= n-f(i-1);
s+=b*i;
}
    printf("%d 天共发%d枚金币",n,s);
}
while (1);
    return 0;
}


