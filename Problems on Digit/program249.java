import java.util.*;

class Digits
{
    public void CountDigits(int iNo)
    {
        int iCount1 = 0;
        int iCount2 = 0;
        int iCount3 = 0;
        int iCount4 = 0;
        int iCount5 = 0;
        int iCount6 = 0;
        int iCount7 = 0;
        int iCount8 = 0;
        int iCount9 = 0;

        int iDigit = 0;  

        while(iNo != 0)
        {  
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iCount0++;
            }
            else if(iDigit == 1)
            {
                iCount1++;
            }
            else if(iDigit == 2)
            {
                iCount2++;
            }
            else if(iDigit == 3)
            {
                iCount3++;
            }
            else if(iDigit == 4)
            {
                iCount4++;
            }
            else if(iDigit == 5)
            {
                iCount5++;
            }
            else if(iDigit == 6)
            {
                iCount6++;
            }
            else if(iDigit == 7)
            {
                iCount7++;
            }
            else if(iDigit == 8)
            {
                iCount8++;
            }
            else if(iDigit == 9)
            {
                iCount9++;
            }  
            iNo = iNo / 10;
        }
        System.out.println("Frequency of 0 is: "+iCount0);
        System.out.println("Frequency of 1 is: "+iCount1);
        System.out.println("Frequency of 2 is: "+iCount2);
        System.out.println("Frequency of 3 is: "+iCount3);
        System.out.println("Frequency of 4 is: "+iCount4);
        System.out.println("Frequency of 5 is: "+iCount5);
        System.out.println("Frequency of 6 is: "+iCount6);
        System.out.println("Frequency of 7 is: "+iCount7);
        System.out.println("Frequency of 8 is: "+iCount8);
        System.out.println("Frequency of 9 is: "+iCount9);
    }    
}

class program249
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