
void bubble(int a[],int size)
{
	cout<<"->\tBubble sorting..."<<endl;
	bool flag;
	for(int i=0;i<size;i++)
	{
		flag=false;
		for(int j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=true;
			}
		}
		if(!flag)
		break;
	}
}
