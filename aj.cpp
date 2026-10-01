#include <stdio.h>
int main(){
//printf ("hello world");
//return 0; 
char name[]="Rajvansh Saini";
int roll=26123;
char cor[]="BCA";
char Colname[]="Amrapali University";
printf("Name:%s\nRoll No: %d\nCourse: %s\nCollege: %s\n",name,roll,cor,Colname);
int a=56;
char part[]="Veer Singh";
float C=9.8;
double D=100;
printf ("int: %d\nchar: %s\nfloat: %f\ndouble: %l\n",a,part,C,D);
int Z=5;
int E=4;
int sum=Z+E;
int diff=Z-E;
int mult=Z*E;
int div=Z/E;
printf ("Sum: %d\nDiff: %d\nMultiply: %d\nDiv %d\n",sum,diff,mult,div);
float len,bre,area,perimeter;
printf("Enter Lenght: ");
scanf("%f",&len);
printf("Enter Bredth: ");
scanf("%f", &bre);
area= len*bre;
perimeter=2*(len+bre);
printf("area: %f\n",area);
printf("perimeter: %f\n",perimeter);
return 0;
}
