#include<stdio.h>

main()
{
  int a,b,c,d,e;
  printf("Enter Value A=");
  scanf("%d",&a);
  printf("Enter Value B=");
  scanf("%d",&b);
  printf("Enter Value C=");
  scanf("%d",&c);
  printf("Enter Value D=");
  scanf("%d",&d);
  printf("Enter Value E=");
  scanf("%d",&e);
  
    if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
				  printf("A is MAx");	
				}
				else
				{
				   	printf("E is MAx");
				}
			}
			else
			{
			  if(d>e)
			  {
			  	printf("D is MAx");
			  }
			  else
			  {
			  	printf("E is MAx");
			  }	
			}
			
		}

		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is MAx");
				}
				else
				{
					printf("E is MAx");
				}
				
			}
			else
			{
			  if(d>e)
			  {
			  	printf("D is MAx");
			  }	
			  else
			  {
			  	printf("E is MAx");
			  }
			}
			
		}
		
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
				  printf("B is MAx");	
				}
				else
				{
					printf("E is MAx");
				}
				
			}
			else
			{
				if(d>e)
				{
					printf("D is MAx");
				}
				else
				{
				  printf("E is MAx");	
				}
				
			}
			
		}
		else
		{
			if(c>d)
			{
				if(c>e)
				{
					printf("C is MAx");
				}
				else
				{
					printf("E is MAx");
				}
			}
			else
			{
				if(d>e)
				{
				   printf("D is MAx");	
				}
				else
				{
					printf("E is MAx");
				}
			}
			
		}
		
	} 
}
