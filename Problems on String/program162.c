
#include<stdio.h>
#include<string.h>
 
int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet = strlen(Arr);  //Display 100

    printf("String length is : %d\n",iRet);

    return 0;
}