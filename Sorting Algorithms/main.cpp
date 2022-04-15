#include<iostream>
using namespace std;
#include "bubbleSort.h"
#include "insertionSort.h"
#include "selectionSort.h"
#include "quickSort.h"
#include "mergeSort.h"
#include "heapSort.h"

void input();
void show();
int a[5];

int main()
{
	int s=sizeof(a)/sizeof(int);
	input();
	heapsort(a,s);
	show();
}

void input()
{
	for(int i=0;i<5;i++)
	{
		cout<<i+1<<") input: ";
		cin>>a[i];
	}
}

void show()
{
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
}
