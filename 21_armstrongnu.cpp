#include<iostream>
using namespace std;

int main()
{
    int n,r,m,sum=0;

    cout<<"enter n no.";
    cin>>n;
    m=n;

    while (n>0)
    {
        r=n%10;
        n=n/10;
        // rev=rev*10+r;
        sum=sum+r*r*r;
    }


    if (sum==m)
    {
        cout<<"armstrong number.";
    }
        else 
     {   cout<<"not armstyrong";
     }
    
    
    
 
    return 0;
}