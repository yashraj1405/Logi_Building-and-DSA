#include<iostream>
using namespace std;

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int No1 = 0, No2 = 0;

    cout<<"Enter first number : \n";
    cin>>No1;

    cout<<"Enter Second Number :\n";
    cin>>No2;

    Swap(&No1, &No2);

    cout<<"Value of No1 After Swapping :"<<No1<<"\n";
    cout<<"Value of No2 After Swapping :"<<No2<<"\n";

    return 0;

}