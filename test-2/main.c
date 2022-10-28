#include <stdio.h>
#include <stdlib.h>
#include <math.h>
///work 1

/*
 int main ()
 {
     int a=3;
     int b=4;
     int c=5;
     float x=1.2;
    float y=2.4;
     float z=-3.6;
      long u=51274;
      long n =128765;
      char c1='a';
      char c2= 'b';
      printf ("a= %d b=%d c=%d\n",a,b,c);
      printf("x=%f,y=%f,z=%f\n",x,y,z);
      printf("x+y= %.2f y+z=%.2f z+x=%.2f\n",x+y,y+z,z+x);
      printf("u= %ld n= %ld\n",u,n);
      printf("c1=%c or %d\n",c1,c1);
      printf("c2=%c or %d\n",c2,c2);
     return 0;
 }
*/
///work 2

/*
int main ()
{
    double r,h=0;
    int times =1;
    int a=0;
    while (1)
    {
    printf("第%d组输入数据：>\n",times);
    scanf("%lf%lf",&r,&h);
    printf("%.2f ",2*3.14*r);
    printf("%.2f ",3.14*pow(r,2));
    printf("%.2f ",4*3.14*pow(r,2));
    printf("%.2f ",(4*3.14*pow(r,3))/3);
    printf("%.2f \n",3.14*pow(r,2)*h);
    printf("如想停止 请输入'0'\n");
    scanf("%d",&a);
    if(a)
    {
        times++;
    }
    else
    {
        break;
    }
    }
    return 0;
}
*/
///3
/*
void or (int y)
{
    int arr [4];
    int x=3;
    for(int j=0;j<=3;j++)
    {
        arr[j] = y/pow(10,x);
        y=y-arr[j]*pow(10,x);
        x--;
    }
    printf("%d %d %d %d \n",arr[3],arr[2],arr[1],arr[0]);
}

int main ()
{
    int a=0;
    scanf("%d",&a);
    for(int i=1;i<=4;i++)
    {
        int xi=0;
        xi = a%10;
        printf("%d ",xi);
        a/=10;
    }
    or (a);
    return 0;
}
*/
///二
/// 1
/*
int y(int n)
{
    if(n<1)
    {
        return n;
    }
    if(n>=1 && n<10)
    {
        return 2*n+1;
    }
    if(n>=10)
    {
        return 3*n-8;
    }
}
int main ()
{
    int x=0;
    while (1)
    {
    scanf("%d",&x);
     int b=y(x);
     printf("y= %d\n",b);
    }
    return 0;

}
*/

///2
/*
int main ()
{
    int arr[4];
    int a=0;
    for (int m=0;m<=3;m++)
    {
    scanf("%d",&arr[m]);
    }
    for(int i=0;i<=3;i++)
    {

        for (int j=i;j<=3;j++)
        {
            if (arr[j]<arr[i])
            {
                a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
       printf("%d\n",arr[i]);
    }
    return 0;

}
*/
#include <Windows.h>
int main ()
{
    //ShellExecute(0, "open", "https://mooc2-ans.chaoxing.com/mycourse/stu?courseid=228080237&clazzid=62283699&cpi=267152825&enc=e26b38316b5e3da168c4f88f122c5807&t=1666069786710&pageHeader=1&v=2",0, 0, 1);


    ShellExecute(0, "open", "https://mooc1.chaoxing.com/mycourse/studentstudy?chapterId=646126892&courseId=228080237&clazzid=62283699&cpi=267152825&enc=a3eaf790a69a146f02cbf2efd5eb9aeb&mooc2=1&openc=130c1125c8bf82fbc4734a2c9927228a",0, 0, 1);
int x=1440;
int y=800;
mouse_event(MOUSEEVENTF_ABSOLUTE|MOUSEEVENTF_MOVE, x*65535/2560, y*65535/1440, 0, 0);
mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);//鼠标左键按下
mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);//鼠标左键抬起
ShellExecute(0, "close", "https://mooc1.chaoxing.com/mycourse/studentstudy?chapterId=646126892&courseId=228080237&clazzid=62283699&cpi=267152825&enc=a3eaf790a69a146f02cbf2efd5eb9aeb&mooc2=1&openc=130c1125c8bf82fbc4734a2c9927228a",0, 0, 1);
sleep (100);

}

