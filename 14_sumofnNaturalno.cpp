#include<iostream>
using namespace std;

// using for loop 

int main()
{
    int n,i,sum=0;
    cout<<"Enter no. you want sum \n";
    cin>>n;

    for(i=1; i<=n; i++)
   {
     sum+= i;
   }
   cout<<"sum of number is "<<sum<<endl;
    return 0;
}

// using while loop 
// int main()
// {
//   int i=1, sum=0, n;
//   cout<<"enter n no.";
//   cin>>n;
// while (i<=n)
// {
//   sum+=i;
//   i++;
// }
// cout<<sum;
//   return 0;
// }

// using do while loop 
// int main()
// {
//   int i=1,sum=0,n;
//   cout<<"enter n natural no.";
//   cin>>n;
//   do
//   {
//     sum+=i;
//     i++;
//   } while (i<=n);
//   cout<<sum;
//   return 0;
// }