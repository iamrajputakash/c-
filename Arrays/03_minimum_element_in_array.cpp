#include<iostream>
using namespace std;
int main()
{
    int n=5, A[10];
    int min= INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(A[i]<min)
        min=A[i];
    }
    cout<<"Minimum element is "<<min<<endl;
    
    
    return 0;
}