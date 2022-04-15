#include<iostream>
using namespace std;
int main()
{
    string name[5] = {"Lahore","Islamabad","Karachi","Sialkot","Faisalabad"};
    for(int i=0;i<5;i++)
    {
        cout<<name[i]<<endl;
    }

    for(int i=0;i<5-1;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(name[i][0]>name[j][0])
            {
                string temp = name[i];
                name[i] = name[j];
                name[j] = temp;
            }
        }
    }
    cout<<"After Sorting"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<name[i]<<endl;
    }
}