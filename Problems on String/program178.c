/*Accept String from user and also Accept the 
chracter and convert in upper to lower case   */


#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str +32;
        }
        str++;

         
    }
        
}
int main()
{
    char Arr[30];

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("String after updation is :%s\n",Arr);  


    return 0;
}