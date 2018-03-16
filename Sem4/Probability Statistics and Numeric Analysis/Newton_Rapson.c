#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(float var, float coef[], int deg)
{
    int i;
    double sum=0;
    for(i=deg;i>=0;i--)
    {
        sum+=coef[i]*pow(var,i);
    }
    return sum;
}

double df(float var, float coef[], int deg)
{
    int i;
    double sum=0;
    for(i=deg;i>=0;i--)
    {
        sum+=i*coef[i]*pow(var,i-1);
    }
    return sum;
}
int main()
{
    int deg,i;
    float x0,x1;
    printf("Enter the value at deg");
    scanf("%d",&deg);
    float coeff[deg+1];
    double Ea;
    printf("Enter the value of coefficients");
    for (i=deg+1;i>0;i--)
    {
        scanf("%d",&coeff[i-1]);
    }
    x0=2;
    printf("x0\t\t\tfx\t\t\tf'x\n");
    do
    {
        x1=x0-(f(x0,coeff,deg)/df(x0,coeff,deg));
        Ea=fabs((x1-x0)*100/x1);
        /*if (x1>x0)
            Ea=(x1-x0)*100/x1;
        else
            Ea=(x0-x1)*100/x1;*/

        printf("%f\t\t%lf\t\t%lf\t\t%lf\n",x0, f(x0,coeff,deg),df(x0,coeff,deg),Ea);
        x0=x1;
    }while(Ea>0.01);

printf("Root is %f",x1);
}
