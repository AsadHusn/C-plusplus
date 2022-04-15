void selection(int a[],int size)
{
	cout<<"->\tSelection sorting..."<<endl;
	for(int i=0;i<size-1;i++)
	{
		int min=i;
		for(int j=i+1;j<size;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		if(min!=i)
		{
			int temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
}
