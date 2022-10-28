#include <stdio.h>
#include <stdlib.h>
/*
struct stu
{
     char *name1;
    char *surname;
    char *name2;
    char *address;
}stu1;
int main ()
{
stu1.name1 ="Gustav Mahler";
stu1.surname ="Gustav";
stu1.name2 ="Mahler";
stu1.address = "lanzhou";
printf("%s\n",stu1.name1);
printf("%s\n",stu1.surname);
printf("%s\n",stu1.name2);
printf("%s\n",stu1.address);
    return 0;
}
*/

int main ()
{
    int a;
    double b;
    long long c;
    printf("请输入你的年龄\n");
    scanf("%d",&a);
    b=a*365.25;
    printf("为%.0f 天\n",b);
    c=a*3.156E7;
    printf("为 %lld 秒\n",c);
    return 0;
}

