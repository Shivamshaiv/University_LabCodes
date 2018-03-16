#include<stdio.h>

int factorial(int n)
{
	int i=0;
	int ans=1;
	if(n==0)
	{
		return 1;
	}
	for(i=1;i<=n;i++)
	{
		ans*=i;
	}
	return ans;
}


float fallfact(float p,int n)
{
	int i;
	if(n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return p;
	}
	float ans=1;
	for(i=0;i<n;i++)
	{
		ans=ans*(p-i);
	}
	return ans/factorial(n);
}

void main()
{
	printf("%f \n \n", fallfact(0.5,4));

	int num,i,j;
	printf("Enter the number of points \n");
	scanf("%d",&num);
	float xp;
	float x[num];
	float* y[num];
	for(i=0;i<num;i++)
	{
		y[i]=(float *)malloc(sizeof(float)*num);
	}
	printf("Please input the x y values \n");
	for(i=0;i<num;i++)
	{
		scanf("%f %f",&x[i],&y[i][0]);
	}
	printf("\n");
	printf("Plase input what value you want the function at? \n");
	scanf("%f",&xp);
	printf("\n");
	for(i=0;i<num;i++)
	{
		printf(" %f \n",y[i][0]);
	}
	for(i=1;i<num;i++)
	{
		for(j=0;j<num-i;j++)
		{
			y[j][i]=y[j+1][i-1]-y[j][i-1];
		}
	}
	for(i=0;i<num;i++)
	{
		for(j=0;j<num-i;j++)
		{
			printf("  %f  ",y[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(i=0;i<num;i++)
	{
		printf(" %f ",y[0][i]);
	}
	float answer=0;
	float p=(xp-x[0])/(x[1]-x[0]);
	printf("\n p is %f \n",p);
	for(i=0;i<num;i++)
	{
		answer=answer+(y[0][i]*(fallfact(p,i)));
		printf("%f \n",answer);
	}
	printf("\nThe answer is %f",answer);

}
