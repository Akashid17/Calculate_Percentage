
using System;

class ArithmeticX
{
	public float Percentage(int iNo1, int iNo2)
	{
		if(iNo2 == 0 || iNo2 > iNo1)
		{
			return -1;
		}
		
		return(((float)iNo2*100)/(float)iNo1);
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Total Marks");
		int iValue1 = Convert.ToInt32(Console.ReadLine());

		Console.WriteLine("Enter Obtained Marks");
		int iValue2 = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		float fRet = aobj.Percentage(iValue1,iValue2);		  

		if(fRet == -1)
		{
			Console.WriteLine("Wrong Input");
		}
		else
		{
			Console.WriteLine("Percentage = "+fRet);
		}
	}
}