/*take number from user and display the factor of that 
number excluding itself */

#include<stdio.h>

void Displayfactors(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are : \n, iNo");

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d",iCnt);
        }

    }


}
int  main()

{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}