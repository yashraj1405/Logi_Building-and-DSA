#include<stdio.h>

int Count(char *ptr)
{
    int iCount = 0; 
    while(*ptr != '\0')
    {
        if(*ptr >= 97 && *ptr <= 122)
        {
            iCount++;
        }
        ptr++;
    }
    return iCount;
}
int main()
{

    char Arr[30];
    int iRet = 0;
    char *ptr = Arr;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);  

    iRet = Count(Arr);
    printf("Count of small is:%d\n",iRet);


    return 0;
}