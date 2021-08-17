
#include<iostream>

using namespace std;

class ArithmeticX
{
    public:
        float Percentage(int, int);
};

float ArithmeticX::Percentage(int iNo1, int iNo2)
{
    if(iNo2 == 0 || iNo2 > iNo1)
    {
        return -1;
    }

    return(((float)iNo2*100)/(float)iNo1);
}

int main()
{
    ArithmeticX aobj;

    int iValue1 = 0, iValue2 = 0;
    float fRet = 0;

    cout<<"Enter Total Marks\n";
    cin>>iValue1;

    cout<<"Enter Obtained Marks\n";
    cin>>iValue2;

    fRet = aobj.Percentage(iValue1,iValue2);

    if(fRet == -1)
    {
        cout<<"Wrong Input\n";
    }
    else
    {
        cout<<"Percentage = "<<fRet<<endl;
    }

    return 0;
}