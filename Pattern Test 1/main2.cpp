#include<iostream>
using namespace std;
int main()
{
    int size = 5;
    for(int i=0;i<size;i++)
    {
        for(int j=size-1;j>i;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}