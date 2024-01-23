#include<stdio.h>
int main()
{
    float marksA,marksB;
    printf("Enter the marks of subject A:");
    scanf("%f",&marksA);
    printf("Enter the marks of subject B:");
    scanf("%f",&marksB);
    if(marksA>=55&& marksB>=45)
    printf("Pass\n");
    else if(marksA>=55&& marksB>=45)
    {
      if(marksB>=55)
      printf("Pass \n");
    }
    else if(marksB<45&& marksA>=65)
    printf("Allowed to reapper in subject B.");
    else 
    printf("Fail\n");
    return 0;
}