/*Accept String from user and also Accept the 
chracter and convert in lower to upper case   */


#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str -32;
        }
        str++;

         
    }
        
}
int main()
{
    char Arr[30];

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("String after updation is :%s\n",Arr);  


    return 0;
}