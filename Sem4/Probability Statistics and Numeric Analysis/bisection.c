

#include<stdio.h>
#include<conio.h>
#include<math.h>

float fun(int A[],int deg,float n)
{
    int temp=deg;
    float ans=0;
    while(temp>=0)
    {
        ans+=A[temp]*pow(n,temp);
        temp--;
    }
    return ans;
}
float absu(float f)
{
    if(f>0)
    {
        return f;
    }
    else
    {
        return -f;
    }
}

void main()
{
    float u , l , c,err;
    int iter=0,deg;
    printf("Enter the  degree");
    scanf("%d",&deg); int temp=deg;
    int P[deg];
    while(temp>=0)
    {
    printf("Give the coef of x^ %d",temp);
    scanf("%d",&P[temp]);
    temp--;
    }
    printf("Enter upper bound");
    scanf("%f",&u);
    printf("Enter lower bound");
    scanf("%f",&l);
    printf("Enter the error");
    scanf("%f",&err);
    printf("%f",fun(P,deg,2));
    if(fun(P,deg,u)*fun(P,deg,l)<0)
    {
        while(absu(fun(P,deg,c))>err)
        {
            c=(float)(u+l)/2;
            if(fun(P,deg,l)*fun(P,deg,c)<0)
            {
                u=c;
            }
            else{
                l=c;
            }
            printf("Iteration %d : l=%f , u=%f , m=%f ,f at c is %0.7f , u-l is %f \n",iter,l,u,c,fun(P,deg,c),u-l);
            iter++;
        }
        printf("\n");
        printf("The final root is %f",c);
    }

}
