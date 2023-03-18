#include<stdio.h>
main()
{
	int a=10,b=20,c=30,d=40,e=50;
	(a>b)?(a>c)?(a>d)?(a>e)?printf("A is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max")
     :(c>d)?(c>e)?printf("C is max"):printf("E is max"):(d>e)?printf("D is max"):printf("E is max"):(b>c)?(b>d)?(b>e)?printf("B is max"):("E is max")
	 :(d>e)?printf("D is max"):printf("E is max"):(c>d)?(c>e)?printf("C is max"):printf("E is max"):(d>e)?("D is max"):printf("E is max");
	 
	 
}
