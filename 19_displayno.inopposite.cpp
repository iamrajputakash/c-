#include<iostream>
using namespace std;

int main()
{
    int i,n,r;
    cout<<"enter no. to reverse";
    cin>>n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
         cout<< r;
    }
   
    return 0;
}