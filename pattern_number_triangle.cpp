#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<=i;j++)
        {
           cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}