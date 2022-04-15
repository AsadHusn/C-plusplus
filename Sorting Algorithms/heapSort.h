void heapify(int a[],int n,int i){
	int l,r,largest;
	largest=i;
	l=i*2+1;
	r=i*2+2;
	if(l<n && a[l]>a[largest])
	largest=l;
	if(r<n && a[r]>a[largest])
	largest=r;
	if(largest!=i)
	{
		swap(a[i],a[largest]);
		heapify(a,n,largest);
	}
}

void heapsort(int a[],int n){
	cout<<"->\tHeap sorting..."<<endl;
	for(int i=(n/2)-1;i>=0;i--)
	heapify(a,n,i);
	for(int i=n-1;i>0;i--)
	{
		swap(a[0],a[i]);
		heapify(a,i,0);
	}
}

