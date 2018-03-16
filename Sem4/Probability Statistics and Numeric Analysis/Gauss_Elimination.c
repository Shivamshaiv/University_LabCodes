#include<stdio.h>

float PivotMultiplier(float A[][4],int rowindex,int j)
{
    float temp= A[rowindex][rowindex];
    float temp2=A[rowindex+j][rowindex];
    return temp2/temp;
}
void RowPivotMul(float A[][4],float pivot,int rowindex)
{
    int i=0;
    for(i=0;i<4;i++)
    {
        A[rowindex][i]=pivot*A[rowindex][i];
    }
}
void SubMat(float A[][4],int rowindex,int j)
{
    int i=0;
    for(i=0;i<4;i++)
    {
        A[rowindex+j][i]=A[rowindex+j][i]-A[rowindex][i];
    }
}
void PrintMat(float A[][4])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%f ",A[i][j]);
        }
        printf("\n");
    }
}

void GaussElem(float B[][4])
{
    /*
    RowPivotMul(B,PivotMultiplier(B,0,1),0);
    SubMat(B,0,1);
    RowPivotMul(B,PivotMultiplier(B,0,2),0);
    SubMat(B,0,2);
    RowPivotMul(B,PivotMultiplier(B,1,1),1);
    SubMat(B,1,1);
    */
    int i=0,j=0,cnt=2;
    for(i=0;i<2;i++)
    {
        for(j=1;j<=cnt-i;j++)
        {
            RowPivotMul(B,PivotMultiplier(B,i,j),i);
            SubMat(B,i,j);
        }
    }
}

void ValueofVariables(float B[][4],float ans[])
{
    /*int maxi=2;
    int i=0,j=maxi;
    for(i=0;i<3;i++)
    {
        ans[maxi-i]=B[maxi-i][3];
        for(j=i;j>0;j--)
        {
            ans[maxi-i]=
        }
    }*/
    ans[2]=-B[2][3]/B[2][2];
    ans[1]=(-B[1][3]-(B[1][2]*ans[2]))/B[1][1];
    ans[0]=(-B[0][3]-(B[0][2]*ans[2])-(B[0][2]*ans[1]))/B[0][0];
}

void main()
{
    float A[3][4];
    float B[3][4];
    float ans[3];
    /*
    A[0][0]=1;
    A[1][0]=2;
    A[2][0]=3;
    A[0][1]=4;
    A[1][1]=5;
    A[2][1]=6;
    A[0][2]=7;
    A[1][2]=8;
    A[2][2]=9;
*/
    int i=0,j=0,cnt=1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            B[i][j]=cnt*cnt;
            cnt++;
        }
    }
    PrintMat(B);

    printf(" Multiplier for 1st case is %f \n",PivotMultiplier(B,0,1));
    printf(" Multiplier for 2st case is %f \n",PivotMultiplier(B,0,2));
    printf("%f \n", B[0][0]);
    printf("%f \n", B[1][0]);
    GaussElem(B);
    PrintMat(B);
    ValueofVariables(B,ans);
    int q=0;
    printf("\n");
    for(q=0;q<3;q++)
    {
        printf("Value of x%d is %f \n",q,ans[q]);
    }



}


