#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Please insert five numbers in sorted order only"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number : ";
        cin>>a[i];
    }
    int start,end,mid,i,j;
    start = 0;
    end = 4;
    cout<<"Enter your search item : ";
    int item;
    cin>>item;
    bool ans = false;
    while(start<=end)
    {
        mid = (start+end)/2;
        if(item == a[mid])
        {
            cout<<"Result found congrates";
            ans = true;
            goto result;
        }
        else if(item>a[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid;
        }
    }
    result:
    if(!ans)
    {
        cout<<"not found please sort if not";
    }

}