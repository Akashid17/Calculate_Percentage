
#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    if(iNo2 == 0 || iNo2 > iNo1)
    {
        return -1;
    }

    return(((float)iNo2*100)/(float)iNo1);
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0;

    printf("Enter Total Marks\n");
    scanf("%d",&iValue1);

    printf("Enter Obtained Marks\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    if(fRet == -1)
    {
        printf("Wrong Input\n");
    }
    else
    {
        printf("Percentage = %f\n",fRet);
    }

    return 0;
}