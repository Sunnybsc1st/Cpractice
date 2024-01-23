#include<stdio.h>
int main()
{
    int i,j,r1,c1,a[3][3],b[3][3];
    printf("Enter each order of A and B matrix by 3x3 ");
    scanf("%d%d",&r1,&c1);
    {
    printf("Enter elements of matrix A");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        scanf("%d",a[i][j]);
    }
    }
    {
    printf("Enter elements of matrix B");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        scanf("%d",b[i][j]);
    }
    }
    {
    printf("Matrix addition");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++);
        printf("%d",a[i][j]+b[i][j]);
    }
    }
    {
     printf("Matrix substraction");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++);
        printf("%d",a[i][j]-b[i][j]);
    }
    }
    return 0;
}