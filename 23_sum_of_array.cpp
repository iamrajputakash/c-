#include<iostream>
using namespace std;

int main()
{
    int i,sum=0;
    int A[]={2,4,6,8,10};

    for (i=0;i<6;i++)
    {
        sum = sum + A[i];
    }
    cout<<sum;
    
    return 0;
}