#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<string.h>
#include <time.h>
///1
void shenlue_1_24 (int a)
{
    void shenlue_1_8  (int a)
    {
/*
int main ()
{


long long num;
	printf("请输入数字：");
	scanf("%lld", &num);
	long long m;
	m = num;
	int i=0;
	int temp = 0;
	int sum = 0;
	if (num == 0)
	{
		printf("位数为:1\n");
		printf("逆序为:0");
		printf("正序为:0");
		return 0;
	}

	printf("逆序输出为：");
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
	printf("\n位数为:%d", i);
	num = m;
	int power = (int)pow(10, i - 1);
	printf("\n正序输出为:");
	if (num < 0)
	{
		printf("-");
		num = -num;
	}
	while (num != 0)
	{
		sum = num /power;
		printf("%d",sum);
		num %= power;
		power /= 10;
	}
	return 0;
}
*/
///2
/*
int main ()
{
    int arr [4];
    int t;
    for(int m=0;m<=3;m++)
    {
        scanf ("%d",&arr[m]);
    }

    for (int i=0;i<=3;i++)
    {
        int k=i;
        for(int j=i+1;j<4;j++)
{

            if(arr[j]>arr[k])

            k=j;

            t=arr[k];

            arr[k]=arr[i];

            arr[i]=t;
}
        printf ("%d\n",arr[i]);
    }
    return 0;
}
*/
/*
///3
int main ()
{
    int m,n;
    int a,b;
    scanf("%d%d",&m,&n);
    if (m<n)
    {
        a=m;
        m=n;
        n=a;
    }

    for (b=m;b<=m*n;b++)
    {
        if (b%m==0&&b%n==0)
        {
            printf("最小公倍数是%d\n",b);
            break;
        }
    }
    return 0;
}
*/

///4
/*
int main ()
{
    int a,n,i;
    int xn =0;
    int sum=0;
    printf("请输入循环的数字\n");
    scanf("%d",&a);
    printf("请输入n的大小\n");
    scanf("%d",&n);
   for (i=0;i<n;i++)
    {
        xn+=a*pow(10,i);
        sum+=xn;

    }
    printf("%d\n",sum);
    return 0;
}
*/


///5
/*
int main ()
{
    int a,b;
    int sum1,sum2=0;
    double c,sum3,sum=0;
    for (a=1;a<=100;a++)
    {
        sum1+=a;
    }
    for (b=1;b<=50;b++)
    {
        sum2+=(int)pow(b,2);
    }
    for (c=1;c<=10;c++)
    {
        sum3+=1/c;
    }
    sum=sum1+sum2+sum3;
    printf("%f\n",sum);
    return 0;
}
*/
///6
/*
int main ()
{
  int b,c,d;
    for (int i=100;i<1000;i++)
    {
         b=i%10;
         c=(i%100-b)/10;
         d=(i%1000-i%100)/100;
        /// printf("\t%d\t%d\t%d\n",b,c,d);
        if (i==pow(b,3)+pow(c,3)+pow(d,3))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
*/
///7
/*
int main ()
{
    int a,sum=0;
    for (int i=2;i<=1000;i++)
    {
        sum=1;
        for (a=2;a<=i/2;a++)
        {
        if (i%a==0)
        {
            sum+=a;
        }
        }
        if (sum==i)
        {
            printf("%d its factors are 1.",i);

        for(a=2;a<=i/2;a++)
        {
            if (i%a==0)
            {
                printf("%d,",a);
            }
        }
        printf("\n");
        }
    }
    return 0;
}
*/
///8
/*
int fib(int n)
{
    if (n<=2)
    {
        return 1;
    }
   else
    {
        return fib(n-1)+fib(n-2);
    }
}
///or
int Fib (int n)
{
    int a= 1;
    int b= 1;
    int c= 1;
    while (n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}

int main ()
{
    int ret=0;
    int n=0;
    scanf("%d",&n);
    ret = Fib(n);
    printf("ret = %d\n",ret);
    return 0;
}
*/
}
///9
/*
int main ()
{
    double sum=0;
    int i=0;
    double a=2;
    double b=1;
    for(i=1;i<=20;i++)
    {
       sum+=a/b;
       int tem =a;
       a=a+b;
       b=tem;

    }
    printf("%f\n",sum);
    return 0;
}
*/

///10
/*
int main ()
{
    float a=100;
    float sum;
    for(int i=1;i<=10;i++)
    {
        sum+=a;
        a/=2;
        sum+=a;

    }
    sum-=a;
    printf("%lf\n%lf\n",sum,a);
    return 0;
}
*/


///11
/*
int main ()
{
    int a=1;

    for(int i=1;i<10;i++)
    {
        a=(a+1)*2;
    }
    printf("%d\n",a);
    return 0;

}
*/

///12
/*
double fx (double n)
{
    return 2*pow(n,3)-4*pow(n,2)+3*n-6;
}
int main ()
{
    double left=-10;
    double right =10;
    while (left<=right)
    {
        double mid =(left+right)/2;
        if (fx(mid)!=0)
        {
            if(fx(mid)>0)
            {
                right=mid;
            }
            if(fx(mid)<0)
            {
                left=mid;
            }
        }
        if(fx(mid)==0)
        {
            printf("%lf\n",mid);
            break;
        }
    }
    return 0;
}
*/
///13
/*
int main ()
{
    char arr1 []="   *   ";
    int left=0;
    int right =strlen(arr1)-1;
    int mid=(left+right)/2;
    left=mid-1;
    right=mid+1;
    printf("%s\n",arr1);
   for (int a=1;a<=3;a++)
   {
       arr1[left]='*';
       arr1[right]='*';
       left--;
       right++;
    printf("%s\n",arr1);
   }
   while (left<=right)
   {
        left++;
       right--;
       arr1[left]=' ';
       arr1[right]=' ';
       printf("%s\n",arr1);
   }
    return 0;
}
/*

///14
/*
int main()
{
	float score;
	int a;
	char grade;
	printf("请输入学生成绩:");
	scanf("%f", &score);
	while (score>100 || score<0)
	{
		printf("输入有误，请从新输入");
		scanf("%f", &score);
	}
	a = score / 10;
	switch (a)
	{
	case 10:
	case 9 :
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'E';
		break;
	}
	printf("成绩是%5.1f,相应的等级是%c\n", score, grade);
	return 0
*/

///15
/*
int main ()
{
        int arr[10];
        int tem =0;
        for (int m=0;m<=9;m++)
        {
        scanf("%d",&arr[m]);
        }
        for (int i=0;i<=9;i++)
        {
            for (int j=i;j<=9;j++)
            {
                if (arr[i]<arr[j])
                {
                    tem=arr[i];
                    arr[i]=arr[j];
                    arr[j]=tem;
                }
            }
            printf("%d\n",arr[i]);
        }
    return 0;
}
*/
///16
/*
int main ()
{
    int arr[100];
    int j,i=0;
    for( i=0;i<100;i++)
    {
        arr[i]=i+1;
        arr[0]=0;
    }
    for(i=0;i<100;i++)
    {

        for( j=i+1;j<100;j++)
        {

        if(arr[i]!=0&&arr[j]!=0)
        {
            if(arr[j]%arr[i]==0)
            {
                arr[j]=0;
            }
        }

        }
    }

    for( i=0;i<100;i++)
    {


        if(arr[i]!=0)
        {
            printf("%d\n",arr[i]);
        }
    }
   return 0;
}
*/
///17
/*
int main ()
{
    int a[5];
    int i,j,b=0;
    for(int c=0;c<=4;c++)
    {
        scanf("%d",&a[c]);
    }
    b=sizeof(a)/sizeof(a[0])-1;
    for( i=b;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
*/
///18
/*
int fac (int x)
{
        int xj=0;
        if(x ==1||x==0)
        {
            xj=1;
        }
        else
        {
    xj = fac(x-1)*x;
        }
    return (xj);
}
int main ()
{
    int i=0;

   for (i;i<=9;i++)
   {
       for(int j=0;j<=i;j++)
       {
        printf("%d ",(fac(i))/(fac(j)*fac(i-j)));
           if(j == i)
           {
               printf("\n");
           }
       }


   }
    return 0;
}
*/
///19
#define ROW 5
#define COL 5
#pragma endregion
/*

int main ()
{
    int a[ROW][COL];
    int i=0;
    int j=0;
    int max,min,col,row,times=0;
    srand((unsigned int)time (NULL));
    for (i=0;i<ROW;i++)
    {
        for (j=0 ;j<ROW;j++)
        {
            a[i][j]=rand()%100+1;
            printf("%3.d ",a[i][j]);
        }
        printf("\n");
    }
     for (i=0;i<ROW;i++)
    {
        for (j=0 ;j<ROW;j++)
        {
            max=a[i][0];
        if (a[i][j]>a[i][0])
        {
            max=a[i][j];
            col=j;
        }
        }
           min = a[i][col];
           for(int j=0;j<ROW;j++)
           {
               if(a[j][col]<a[j][0])
               {
                   min =a[j][col];
                   row=j;
               }
           }
           if(max==min&&i==row)
           {
               printf("锚点是%d 位于%d行%d列\n",a[row][col],row,col);
               times++;
           }
    }
    if (0 == times )
    {
        printf("无锚点\n");
    }
    return 0;
}
*/
/// 20 一个二维数组实现行列互换
/*
void Change_Array (int a[3][3])
{
    int tem =0;
    for (int i=0;i<3;i++)
    {
      for (int j=0;j<i;j++)
      {
          if (i !=j)
          {


          tem = a[i][j];
          a[i][j]=a[j][i];
          a[j][i]=tem;
          }
      }
    }

}
void Print_Array (int a[3][3])
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
int main ()
{
    int a [3][3]={{0,1,2},{3,4,5},{6,7,8}};

    Change_Array (a);
    Print_Array (a);
    return 0;
}
*/
/// 21 输出图形
/*
int main ()
{
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<i;j++)
        {
            printf("  ");
        }
        printf("* * * * *\n");
    }
    return 0;
}
*/
/// 22 密码转换
/*
void print (char arr[30],int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main ()
{
    char arr [30]={0};
    scanf("%s",arr);
    int len =strlen(arr);
    print(arr,len);
    for (int i=0;i<len;i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
arr[i]='a'+26-(arr[i]-'a')-1;
        }
        else if (arr[i]>='A'&&arr[i]<='Z')
        {
            arr[i]='A'+26-(arr[i]-'A')-1;
        }
    }
    print(arr,len);
    return 0;
}
*/
///23
/*
void add_string (char a1[100],char a2[50])
{
    int c=0;
    for (int j=0;j<100;j++)
    {
        if(a1[j]!='\0')
            c++;
    }
    for (int i=0;i<50;i++)
    {
        a1[c]=a2[i];
        c++;
    }
}
void or_add_string (char a1[100],char a2[50])
{
    int count=0;
    for (int i=0;i<100;i++)
 {
     if(a1[i]!='\0')
         count++;
 }
 for(int j=0;j<50;j++)
 {
     a1[count]=a2[j];
     count++;
 }
}

int main ()
{
    int count;
    char tem [100] ={0};
    char a1 [100]={0} ;
    char a2 [50]= {0} ;
    printf("请输入第一个字符串\n");
    scanf("%s",a1);
    //change (tem,a1);
    printf("请输入第二个字符串\n");
    scanf("%s",a2);
 add_string(a1,a2);
    printf ("%s\n",a1);
 or_add_string(a1,a2);
    printf ("%s\n",a1);
    return 0;
}
*/
///24 求一个数的二进制数中1的个数

/*
void f1 (unsigned int a)
{
    int count =0;
    while(a)
    {
        if(1==a%2)
            count++;
            a/=2;
    }
    printf("有%d个1\n",count);
}
int main ()
{
    unsigned int a=0;
    printf("请输入数字\n");
    scanf("%d",&a);
    f1 (a);
}
*/
//or
/*
void f1 (int a)
{
    int count =0;
    for(int i=0;i<=31;i++)
    {
        if(((a>>i)&1)==1)
        {
            count++;
        }
    }
    printf("有%d个1\n",count);
}
void f2 (int a)
{
    int count =0;
    while (a)
    {
        a=a&(a-1);
        count++;
    }
    printf("有%d个1\n",count);
}
int main ()
{
     int a=0;
    printf("请输入数字\n");
    scanf("%d",&a);
    f1 (a);
    f2 (a);
}
*/
    }
///

int main ()
{

    return 0;
}
