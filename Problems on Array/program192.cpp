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

};
int main()
{
    int iLength = 0;  

    cout<<"Enter the Number of Element that you want to store:\n";
    cin>>iLength;

    Array aobj(iLength);

    aobj.Accept();
    aobj.Display();

     

    return 0;
}