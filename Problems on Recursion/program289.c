#include<stdio.h>

int CountCapital(char *str)
{
    static int iCount=0;
    if(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            iCount++; 
        }
        str++;
        CountCapital(str);
    }
    return iCount;
}

int main()
{
   char Arr[30];
   int iRet=0;

   printf("enter string:\n");
   scanf("%[^'\n']s",Arr);

   iRet=CountCapital(Arr);

   printf("string length is: %d",iRet);

   return 0;
}