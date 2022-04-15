#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number : ";
    int n;
    cin>>n;
    bool ans=true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            ans = false;
            cout<<"not prime";
            break;
        }
    }
    if(ans)
    {
        cout<<"it is prime";
    }
}