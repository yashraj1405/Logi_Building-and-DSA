#include<iostream>

using namespace std;

int main()
{
    int iLength = 0, iCnt = 0;
    int *Arr = NULL;  // Data (Characteristics)

    cout<<"Enter the Number of Element that you want to store:\n";
    cin>>iLength;

    Arr = new int[iLength]; // Resource allocation (Constructor)

    cout<<"Enter the values : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++) //Logic(Function)
    {
        cin>>Arr[iCnt]; 
    }


    cout<<"Value from the Array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)  // Logic(Function)
    {
        cout<<Arr[iCnt]<<"\n";
    }

    delete[]Arr;  //Resource deallocation (destructor)

    return 0;
}