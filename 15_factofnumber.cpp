#include<iostream>
using namespace std;

int main()
{
    int i,fact=1,n;

    cout<<"enter number to find fact.";
    cin>>n;

    for ( i = 1; i<=n; i++)
    {
        fact *= i;
        

    }
    cout<<n<<"!="<<fact; 

    return 0;
}