#include<stdio.h>
main()
{
	int a=10,b=20,c=30,d=40;
	(a>b)?(a>c)?(a>d)?printf("A is max"):printf("D is max"):(c>d)?printf("C is max") : printf("D is max")
	     :(b>c)?(b>d)?printf("B is max"):printf("D is max"):(c>d)?printf("C is max"):printf("D is max");
}


