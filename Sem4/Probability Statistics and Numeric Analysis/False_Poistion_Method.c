#include<stdio.h>
#include<conio.h>
#include<math.h>

float fun(int P[],int deg,float value)
{
    int i=0,temp=deg;
    float tot=0;
    for(i=temp;i>=0;i--)
    {
        tot+=P[i]*pow(value,i);
    }
    return tot;
}
float abs(float x)
{
    if(x>0) {return x;}
    else
    {return -x;}
}

int* deri(int P[],int deg)
{
    int Q[deg],i;
    for(i=deg-1;i>=0;i--)
    {
        Q[i]=P[i+1]*(i+1);
    }
    return Q;
}
int main()
{

    int A[10];
    float x1=1,x2=2,fx3;
    int deg=2,i;
    printf("Please Enter the degree of the Polynomial");
    scanf("%d",&deg);
    int temp=deg;
    for(i=temp;i>=0;i--)
    {
        scanf("%d",&A[i]);
    }

    printf("Please input the smaller guess");
    scanf("%f",&x1);
    printf("Please input the larger guess");
    scanf("%f",&x2);
    float fx1=fun(A,deg,x1),fx2=fun(A,deg,x2);
    float x3=((x1*fx2) - (x2*fx1))/(fx2-fx1);
    while(abs(fun(A,deg,x3))>0.001)
    {
        fx1=fun(A,deg,x1);
        fx2=fun(A,deg,x2);
        x3= ((x1*fx2) - (x2*fx1))/(fx2-fx1);
        fx3=fun(A,deg,x3);
        if(fx3 < 0)
            {x1 = x3;}
        else
            {x2 = x3;}
        printf("\n%0.4f\t%0.4f\t%0.4f\t%0.4f%",x1,x2,x3,fx3);

    }
    printf("\n\nFinal Root:%0.4f",x3);

    int guess=100;
    int* derivative=deri(A,deg);
    int deriarr[deg-1];
    int temp2=deg-1;
    for( i=temp2;i>=0;i--)
    {
        deriarr[i]=*(derivative+i);
    }
    printf("\n Test section \n");
    for( i=temp2;i>=0;i--)
    {
        printf("%d ",deriarr[i]);
    }
    printf("\n");
    float xr=guess;
    while(abs(fun(A,deg,xr))>0.001)
    {
        xr-=(fun(A,deg,xr))/(fun(deriarr,temp2,xr));
        printf("\n %f",xr);
    }


}
