#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

 int main ()
 {
    int a=0;
    int x=0;
    scanf ("%d",&a);
    ///scanf ("%d",arr);
    float b=log10(a);
    int i=b;
    int p =pow(10,i);
    while ( b >=5)
    {
        printf ("error! please set again\n");
        scanf ("%d",&a);
        b=log10(a);
    }
    printf ("����%.0fλ��\n",b+1);
    printf("�������Ϊ:>");
        for ( i=b;i>=0;i--)
    {
    x=a%10;
    printf ("%d\n",x);
    a/=10;
}
printf("�������Ϊ:>");
if (a < 0)
	{
		printf("-");
		a = -a;
	}
	while (a != 0)
	{
		x = a /p;
		printf("%3d",x);
		a %= p;
		p /= 10;
	}
     return 0;
 }
/*

int main()
{
	long long num;
	printf("���������֣�");
	scanf("%lld", &num);
	long long m;
	m = num;//����num�������ں����������
	int i=0;
	int temp = 0;
	int sum = 0;
	if (num == 0)
	{
		printf("λ��Ϊ:1\n");
		printf("����Ϊ:0");
		printf("����Ϊ:0");
		return 0;
	}

	printf("�������Ϊ��");
	if (num < 0)
	{
		printf("-");
		num = -num;
	}
	while (num!=0)
	{
		temp = num % 10;
		printf("%d", temp);
		num/=10;
		i++;
	}
	printf("\nλ��Ϊ:%d", i);//����numΪ0

	num = m;
	int power = (int)pow(10, i - 1);
	printf("\n�������Ϊ:");
	if (num < 0)
	{
		printf("-");
		num = -num;
	}
	while (num != 0)
	{
		sum = num /power;
		printf("%3d",sum);
		num %= power;
		power /= 10;
	}
	return 0;
}
*/
