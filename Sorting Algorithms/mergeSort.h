void merging(int a[],int low,int mid,int high){
	int l,r,k,b[5];
	l=k=low;
	r=mid+1;
	while(l<=mid && r<=high)
	{
		if(a[l]<=a[r])
		{
			b[k]=a[l];
			l++;
		}
		else
		{
			b[k]=a[r];
			r++;
		}
		k++;
	}
	if(l>mid)
	{
		while(r<=high)
		{
			b[k]=a[r];
			r++; k++;
		}
	}
	else
	{
		while(l<=mid)
		{
			b[k]=a[l];
			l++; k++;
		}
	}
	for(k=low;k<=high;k++)
	a[k]=b[k];
}

void mergesort(int a[],int low,int high){
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merging(a,low,mid,high);
	}
}

void merge(int a[],int size)		//main function
{
	cout<<"->\tMerge sorting..."<<endl;
	mergesort(a,0,size-1);
}
