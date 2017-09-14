class oop2b{
	public static void main(String args[])
	{
		int arr[]={4,5,6,8,3,7,5};
		System.out.println("The min is "+ Minval(arr));
		System.out.println("The max is "+Maxval(arr));
	}

	public static int Minval(int[] arr)
	{
		int i=0;
		int min=arr[0];
		for(i=0;i<arr.length;i++)
		{
			if(arr[i]<min)
			{
				min=arr[i];
			}
		}

		return min;
	}
	public static int Maxval(int[] arr)
	{
		int i=0;
		int max=arr[0];
		for(i=0;i<arr.length;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}

		return max;
	}
}