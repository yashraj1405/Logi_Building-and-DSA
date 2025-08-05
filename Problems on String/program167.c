#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a'||*str == 'A' || *str == 'b'||*str =='B')
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
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet = CountSmall(Arr);  //Display 100

    printf("Count of Given Letters Are : %d\n",iRet);

    return 0;
}