
#include<stdio.h>

void Display(char *str)
{
    printf("Entered string is :");

    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}
int main()
{
    char Arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    Display(Arr);  //Display 100

    return 0;
}