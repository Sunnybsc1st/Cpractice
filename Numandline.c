/*Write a c program to open a file and count the number of characters and lines in the file*/
#include<stdio.h>
int main()
{
    FILE *file;
    char filename[100];
    char ch;
    int charcount=0,linecount=0;
    printf("enter the file name:");
    scanf("%s",filename);
    file=fopen(filename,"r");
    if(file==NULL)
    {
        printf("error open the file.");
        return 1;
    }
    while((ch=fgetc(file))!=EOF)
    {
        charcount++;
        if(ch=='\n')
        {
         linecount++;
        }
    }
    fclose(file);
    printf("Number of characters:%d\n",charcount);
    printf("number of lines:%d",linecount);
    return 0;    
}