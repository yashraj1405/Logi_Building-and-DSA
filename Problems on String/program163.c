#include<stdio.h>

int strlenX(char *str)
{

    int iCnt = 0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;
    
}
 
 
int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);  //Display 100

    printf("String length is : %d\n",iRet);

    return 0;
}