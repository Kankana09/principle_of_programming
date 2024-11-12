

//Write a program in c to swap the values of variable a & b without using 3rd variable.
#include<stdio.h>
int main()
{
int a,b;//Write a C program which will add two distance given in feet and inches using structures.If the inches sum is >12, the feet sum will add by one and the inches sum will reduce by 12.
#include<stdio.h>
int main()
{
	struct distance
	{
		int inches;
		int feet;
	};
	struct distance d1,d2,d3;
     printf("Enter the two distances in feet:\n");
     scanf("%d %d",&d1.feet,&d2.feet);
   struct distance d4,d5,d6;
   printf("Enter the two distances in inches:\n");
   scanf("%d %d",&d4.inches,&d5.inches);
    d3.feet=d1.feet+d2.feet;
    d6.inches=d4.inches+d5.inches;
    if(d6.inches>12)
    {
    	d3.feet++;
    	d6.inches-=12;
	}
	printf("The value in feet:%d\n",d3.feet);
	printf("The value in inches:%d\n",d6.inches);
}
printf("Enter the values of A and B:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("The new value of A is:%d\n",a);
printf("The new value of B is:%d\n",b);
}
