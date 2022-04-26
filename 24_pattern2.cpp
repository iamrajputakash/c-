#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    // for ( i = 0; i <5; i++)
    // {
    //     for ( j = 0; j<=i; j++)
    //     {
    //         // if(i>=j)
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // for ( i = 0; i <5; i++)
    // {
    //     for ( j = 0; j<5; j++)
    //   {
    //         if(i>j)
    //         cout<<" ";
    //         else
    //         cout<<"*";
    //     }
        
    //     cout<<endl;
    // }

    for ( i = 0; i <5; i++)
    {
        for ( j = 0; j <5; j++)
        {
            if (i+j>4)
            {
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    
    
}