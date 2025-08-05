/*Accept String And count small 'm' form that */

#include<stdio.h>

int CountVowels(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'm')
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

    iRet = CountVowels(Arr);  //Display 100

    printf("Count of Vowels Are : %d\n",iRet);

    return 0;
}