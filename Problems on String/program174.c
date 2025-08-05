/*Accept String from user and also Accept the chracter
which we want to count */

#include<stdio.h>

int Count(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;    
}
int main()
{
    char Arr[30];
    char cValue = '\0';
    int iRet = 0;


    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character :\n");
    scanf(" %c",&cValue);  // Only space is Added

    iRet = Count(Arr,cValue);  //Display 100

    printf("Count Are : %d\n",iRet);

    return 0;
}