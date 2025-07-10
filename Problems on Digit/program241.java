/*take number from user and return the multiplication of their
digits.*/
import java.util.*;

class Digits
{
    public int MultiplicationDigits(int iNo)
    {
        int iMult = 1; int iDigit = 0;

        while(iNo != 0)
        {
            
            iDigit = iNo % 10;
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;

    }    

        
}

class program241
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0,iRet = 0;

        System.out.println("Enter the number:");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.MultiplicationDigits(iValue);

        System.out.println("Multiplication of Digits is:" +iRet);



    }
}