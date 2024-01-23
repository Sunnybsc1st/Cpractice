/* Write a program to remove the duplicates from an array*/
#include<stdio.h>
void removeduplicate(int a[],int *size)
{
    int i,j,k;
    for(i=0;i<*size;i++)
    {
        for( j=i+1;j<*size;)
        {
            if(a[i]==a[j])
            {
                for( k=j;k<*size-1;k++)
                {
                    a[k]=a[k+1];
                }
                (*size)--;
            }
            else{
                j++;
            }
        }
    }
}
int main()
{
    int a[]={1,5,2,5,4,3,1};
    int size=sizeof(a)/sizeof(a[0]);
    printf("Original array:");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    removeduplicate(a,&size);
    printf("\n array after remove duplicates:");
    for(int i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}