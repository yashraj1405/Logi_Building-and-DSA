/*Accept String from user and also Accept the chracter
and check whether it is present or not */

#include<stdio.h>
#include<stdbool.h>

int CheckBool(char *str, char ch)
{
    int iCnt = 0;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;    
}
int main()
{
    char Arr[30];
    char cValue = '\0';
    bool bRet = false;


    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the Character :\n");
    scanf(" %c",&cValue);  // Only space is Added

    bRet = CheckBool(Arr,cValue);  //Display 100

    if(bRet == true)
    {
        printf("Character is Present:\n");
    }
    else
    {
        printf("Charatcter is Not Present:\n");
    }
    return 0;
}