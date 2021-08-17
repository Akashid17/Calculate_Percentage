
import java.lang.*;
import java.io.*;

class Arithmetic
{
	float Percentage(float iNo1, float iNo2)
	{
		if(iNo2 == 0 || iNo2 > iNo1)
		{
			return -1;
		}

		return((iNo2*100)/iNo1);
	}
}

class Main
{
	public static void main(String Arg[])
	{
		BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

		int iValue1 = 0, iValue2 = 0;

		try
		{
			System.out.println("Enter Total Marks");
			iValue1 = Integer.parseInt(bobj.readLine());

			System.out.println("Enter Obtained Marks");
			iValue2 = Integer.parseInt(bobj.readLine());
		}
		catch(Exception eobj)
		{}

		Arithmetic aobj = new Arithmetic();

		float fAns = aobj.Percentage(iValue1,iValue2);

		if(fAns == -1)
		{
			System.out.println("Wrong Input");
		}
        else
        {
            System.out.println(fAns);
        }
	}
}