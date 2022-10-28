#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>


/*
 int main ()
 {
    int a=0;
    scanf ("%d",&a);
    float b=log10(a);
    while ( b >=6)
    {
        printf ("error! please set again\n");
        scanf ("%d",&a);
        b=log10(a);
    }
    printf ("他是%.0f 位数\n",b);

     return 0;
 }
*/


/*
int main ()
{
    float charge =7000,food=30,clothes=2000,total=0,travel=2000,ratio=.95,age=18;
   FILE * p_cost = fopen ("cost.txt","w");
   printf ("\tcharge\tfood\tcolthes\ttravel\ttotal\n");
   fprintf(p_cost,"\tcharge\tfood\tcolthes\ttravel\ttotal\n");
    while (age>0)
    {
        total+=charge;
        total+=food*365;
        total+=clothes;
        total+=travel;
        printf ("\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\n",age,charge,food,clothes,travel,total);
       fprintf(p_cost,"\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\n",age,charge,food,clothes,travel,total);
        charge*=ratio;
        food*=ratio;
        clothes*=ratio;
        travel*=ratio;
        age--;

    }
    fclose(p_cost);
    return 0;
}
*/
/*
int main ()
{
float charge ,food,clothes,total,travel,age=18;

   char c;
   FILE * p_cost = fopen ("cost.txt","r");
  while ((c=fgetc(p_cost)) != '\n')
  {
      printf("%c",c);
  }
  printf("\n");
   while (!feof(p_cost))
    {
       /// c= fgetc(p_cost);
       /// putchar (c);
        fscanf(p_cost,"%f%f%f%f%f%f",&age,&charge,
               &total,&clothes,&travel,&total);
               total =charge+food*365+clothes+travel;
               printf ("\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\t%.0f\n"
                       ,age,charge,food,clothes,travel,total);
       /// c=fgetc(p_cost);
        ///putchar (c);


    }
    fclose(p_cost);
    return 0;
}
*/

  int main ()
  {
     unsigned char c=0;
      for (c=1;c<=254;c++)
      {
          printf ("%d is %c\n",c,c);
      }
      return 0;
  }
