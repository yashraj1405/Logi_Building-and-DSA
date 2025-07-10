
import java.util.*;

class Digits
{
    public int AdditionDigits(int iNo)
    {
        int iAdd = 0;  

        while(iNo != 0)
        {  
            iAdd =  iAdd + (iNo % 10);
            iNo = iNo / 10;
        }
        return iAdd;

    }    

        
}

class program244
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