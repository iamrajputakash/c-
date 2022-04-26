#include<iostream>
using namespace std;
int main()
{

    int A[]={6,7,4,3,9,20};
    int n=6; int sum=0;

    for(int i=0; i<n; i++)
    {
        sum = sum+A[i];
    }
   
   cout<<"Sum of elements is "<< sum <<endl;
    return 0;

}