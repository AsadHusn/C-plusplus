void swap(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int a[],int low,int high){
	int pi=a[high];
	int loc=low-1;
	int i;
	for(i=low;i<high;i++)
	{
		if(a[i]<pi)
		{
			loc++;
			swap(&a[i],&a[loc]);
		}
	}
	swap(&a[loc+1],&a[high]);
	return (loc+1);
}

void quicksort(int a[],int low,int high){
	if(low<high)
	{
		int pivot=partition(a,low,high);
		quicksort(a,pivot+1,high);
		quicksort(a,low,pivot-1);
	}
}

void quick(int a[],int size)	//main function
{
	cout<<"->\tQuick sorting..."<<endl;
	quicksort(a,0,size-1);
}
