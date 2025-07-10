#include<iostream>

using namespace std;

class Array
{
    public:
        int *Arr;
        int iSize;
         

        Array(int A)
        {
            iSize = A;
            Arr = new int[iSize];
        }
        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the Values :\n";
            for(iCnt = 0; iCnt < iSize; iCnt++)  
            {
                cin>>Arr[iCnt]; 
            }

        }

        void Display()
        {
            int iCnt = 0;
            cout<<"Values from array are :\n";
            for(iCnt = 0; iCnt < iSize; iCnt++)   
            {
                cout<<Arr[iCnt]<<"\n";
            }

        }
        void DisplayR()
        {
            int iCnt = 0;
            cout<<"Values from array are :\n";
            for(iCnt = iSize-1; iCnt >= 0; iCnt--)   
            {
                cout<<Arr[iCnt]<<"\n";
            }

        }


};
int main()
{
    int iLength = 0, iRet = 0;  

    cout<<"Enter the Number of Element that you want to store:\n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();

    aobj.DisplayR();

     

    cout<<"Number of Even elements Are : "<<iRet<<"\n";
     

    return 0;
}