import java.util.*;

class Digits
{
    public void CountDigits(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;  

        while(iNo != 0)
        {  
            iDigit = iNo % 10;
            if(iDigit == 7)
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
        System.out.println("Frequency of 7 is: "+iCount);
    }    
}

class program246
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the number:");
        iValue = sobj.nextInt();

        Digits dobj = new Digits();
        dobj.CountDigits(iValue);

 


    }
}