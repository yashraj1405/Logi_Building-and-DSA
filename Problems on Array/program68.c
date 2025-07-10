#include<stdio.h>
void Display(int *ptr)
{
    int iCnt = 0;
    printf("Values of the Array are :\n");

    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n",*ptr);
        ptr++;
    }     
}

int main()
{
    int Arr[4];
    int iCnt = 0;

    printf("Please Enter the Value :\n");

     //     1        2        3
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        scanf("%d",&Arr[iCnt]); //4
    }
     
    Display(Arr);  //Display(100)
    
    return 0;
}