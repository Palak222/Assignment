public class Assignment
{

	public float SqRoot(int num,int precision)
	{
		int low=0,high=num;
		double result=0.0;
		while(low<=high)
		{
			int mid=(low+high)/2;
			if(mid*mid==num)
				{
					result=mid;
                    			break;
				}
			else if(mid*mid<num)
				{
					low=mid+1;
					result=mid;
				}
			else 
				{
					high=mid-1;
				}
		}
		double inc=0.1;
		for(int i=0;i<precision;i++)
		{
			while(result*result<=num)
			{
				result=result+inc;
			}
		   	result=result-inc;
			inc=inc/10;
		}
		return (float)result;
	}

	public static void main(String args[])
	{
		Assignment obj=new Assignment();
		System.out.println(obj.SqRoot(50,3));
		System.out.println(obj.SqRoot(10,4));
	}
}