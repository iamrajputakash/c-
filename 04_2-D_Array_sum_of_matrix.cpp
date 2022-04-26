#include<iostream>
using namespace std;
int main()
{
    int n=6;
int A[2][3];
for(int i=0; i<2; i++)
{
    for(int j=0; j<3; j++)
    {
        cin>>A[i][j];
    }
}
    // int A[2][3]={{2,4,6},{5,6,9}};
    int B[2][3]={{5,4,7},{5,9,1}};
    int c[2][3];

    for(int i=0; i<2; i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]= A[i][j]+B[i][j];

        }

    }
for(int i=0; i<2; i++)
    {
        for(int j=0;j<3;j++)
        {
             cout<<c[i][j]<< " ";
             

        }

    }
    
    return 0;
}