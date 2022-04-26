#include<iostream>
using namespace std;
int main()
{
 int i=1;
 int n;
int  sum =0;
 cout<<"Enter number to add\n";
 cin>>n;

 while (i<=n)
 {
     sum= sum +i;
     i++;
 }
  cout<<sum<<endl;
 
 return 0;
}