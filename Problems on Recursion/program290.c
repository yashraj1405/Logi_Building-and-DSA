#include<stdio.h>

int CountSmall(char *str)
{
    static int iCount=0;
    if(*str!='\0')
    {
        if(*str>='a' && *str<='z')
        {
            iCount++; 
        }
        str++;
        CountSmall(str);
    }
    return iCount;
}

int main()
{
   char Arr[30];
   int iRet=0;

   printf("enter string:\n");
   scanf("%[^'\n']s",Arr);

   iRet=CountSmall(Arr);

   printf("string length is: %d",iRet);

   return 0;
}