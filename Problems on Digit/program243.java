/*take number from user and return the multiplication of their
digits.*/
import java.util.*;

class Digits
{
    public int AdditionDigits(int iNo)
    {
        int iAdd = 0; int iDigit = 0;

        while(iNo != 0)
        {  
            iDigit = iNo % 10;
            iAdd =  iAdd + iDigit;
            iNo = iNo / 10;
        }
        return iAdd;

    }    

        
}

class program243
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0,iRet = 0;

        System.out.println("Enter the number:");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        iRet = dobj.AdditionDigits(iValue);

        System.out.println("Addtion of Digits is:" +iRet);



    }
}