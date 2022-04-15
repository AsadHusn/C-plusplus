#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter number : ";
        cin>>a[i];
    }
    cout<<"Enter search item : ";
    int item;
    cin>>item;
    bool ans = false;
    for(int i=0;i<5;i++)
    {
        if(item == a[i])
        {
            cout<<"Result found";
            ans = true;
            break;
        }
    }
    if(!ans)
    {
        cout<<"not found";
    }
}