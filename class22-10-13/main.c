#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
int b=0;
    int a[10] ={1,2,3,4,5,6,7,8,9,};
scanf("%d",&b);
int end=8;
while (end>=0&&b<a[end])
{
    a[end+1]=a[end];
    end--;
}
a[end+1]=b;
printf("result\n");
for (int i=0;i<10;i++)
{
    printf("%d", a[i]);

}printf("\n");
    return 0;
}

