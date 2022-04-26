#include<iostream>
using namespace std;
int main ()
{
    int i,n,pno, sum=0;
    cout<<"Enter no.";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            sum+= i;
        }
    }
      if (2*n==sum)
      {
          cout<<"perfecr number";
      }
      else
      {
          cout<<"not perfect no."<<endl;
      }
      
        
    
    
    return 0;
}