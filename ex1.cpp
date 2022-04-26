#include<iostream>
using namespace std;
int main()
{
int n,m,r,rev=0;
cout<<"enter n number ";
cin>>n;
m=n;
while (n>0)
{
    r=n%10;
    n=n/10;
    rev=rev*10+r;
}
cout<<"reverse of number is "<<rev<<endl;
 if(rev==m)
 cout<<"palindrome number";
 else
 cout<<"not palindrome";


return 0;
}