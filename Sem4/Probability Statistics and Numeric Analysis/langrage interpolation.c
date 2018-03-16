#include<stdio.h>
#include<conio.h>

float Langragei(float A[],int index,float value,int n)
{
    int i=0;
    float prod=1;
    for(i=0;i<n;i++)
    {
        if(i==index)
        {
            continue;
        }
        else
        {
            prod=prod*(value-A[i]);
        }
    }
    return prod;
}

float LangrageP(float A[],int index,float value,int n)
{
    return (Langragei(A,index,value,n)/Langragei(A,index,A[index],n));
}

void main()
{
    int n,i;
    float value;
    printf("Enter the number of points to be entered: ");
    scanf("%d",&n);
    printf("\nEnter the points \n");
    float X[100];
    float Y[100];
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&X[i],&Y[i]);
    }
    printf("Enter the value you want the function at\n");
    scanf("%f",&value);
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+(Y[i]*LangrageP(X,i,value,n));
    }
    printf("\nThe value is %f\n",sum);
    printf("The Langrage Polynomials are");
    for(i=0;i<n;i++)
    {
        printf("\n%f",LangrageP(X,i,value,n));
    }
}
