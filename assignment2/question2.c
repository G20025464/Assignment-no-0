#include<stdio.h>
void main()
{
int a=10,b=20,c=15;
  
     {
	if(a==b && b==c)
	{
		printf("the triangle is equilateral");
	}
       if(a==b||b==c||a==c)
	{
		printf("the triangle is isoscele");
	}
	else
	{
		printf("the triangle is scalene");
	} 
	}

     
}