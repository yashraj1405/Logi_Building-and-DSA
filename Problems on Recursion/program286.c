#include<stdio.h>

int strlenX(char *str)
{
    int iCount=0;
    while(*str!='\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
   char Arr[30];
   int iRet=0;

   printf("enter string:\n");
   scanf("%[^'\n']s",Arr);

   iRet=strlenX(Arr);

   printf("string length is: %d",iRet);

   return 0;
}