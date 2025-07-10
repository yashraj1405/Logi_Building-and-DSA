#include<stdio.h>
#include<stdlib.h> //library used for dynamic memory allocation in C
int main()
{
    int iLength = 0;
    int *ptr = NULL;

    printf("Enter the Number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    //use

    free(ptr);

    return 0;
}