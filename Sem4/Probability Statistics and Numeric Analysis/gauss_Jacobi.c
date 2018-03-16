#include<stdio.h>
#include <time.h>
#include <stdlib.h>
void swap(float* xp,float* yp)
{
      float temp = *xp; *xp = *yp; *yp = temp;
}
float absu(float a)
{
    if(a<0)
    {
        return -a;
    }
    else
    {
        return a;
    }
}
void PartitialPivot(float B[][4],int numrow)
{
    int i,j,cnt=2;
    while(cnt)
    {

        for(i=numrow;i<2;i++)
        {
            if(absu(B[i][numrow])<absu(B[i+1][numrow]))
            {
                for(j=0;j<4;j++)
                {
                    swap(&B[i+1][j],&B[i][j]);
                }
            }
        }
        cnt--;
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
void Initialize_Matrix(float B[][4])
{
    PartitialPivot(B,0);
}

void RunInteration(float B[][4],float* prevx,float* prevy,float* prevz)
{
	 float tempx,tempy,tempz;
     tempx=(B[0][3]-(*prevy) *B[0][1]-(*prevz) *B[0][2])/B[0][0];
     tempy=(B[1][3]-(*prevx) *B[1][0]-(*prevz)* B[1][2])/B[1][1];
     tempz=(B[2][3]-(*prevx) *B[2][0]-(*prevy)* B[2][1])/B[2][2];
	 *(prevx)=tempx;
	 *(prevy)=tempy;
	 *(prevz)=tempz;
}

void main()
{   srand(time(NULL));
    float B[3][4];
    int i=0,j;
    for(i=0;i<3;i++)
    {
        B[i][i]=(rand()%100)+10;
        B[i][3]=(rand()%100)+5;
    }

      for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j){continue;}
            //B[i][j]=cnt*cnt;
            int m=B[i][i];
            //B[i][j]=(rand()%m);
            B[i][j]=rand()%10+1;
        }
    }
    PrintMat(B);
    float prevx=0,prevy=0,prevz=0;
    int cnt=10;
    while(cnt--)
    {
    RunInteration(B,&prevx,&prevy,&prevz);
    }
    printf("\nRoots are %f %f %f",prevx,prevy,prevz);

    float prevx2=0,prevy2=0,prevz2=0;
    int cnt2=3;
    while(cnt2--)
    {
    RunInteration(B,&prevx2,&prevy2,&prevz2);
    }
    printf("\nRoots are %f %f %f",prevx2,prevy2,prevz2);
	float checkans=B[1][0]*prevx+B[1][1]*prevy+B[1][2]*prevz-B[1][3];
	printf("\nThe check answer is : %f \n", checkans);
}
