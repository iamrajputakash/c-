#include<iostream>
using namespace std;
int main()
{
    // without using function
    // pow (a,b)
    int a, b;
    cin>>a >>b;

    int ans=1;
    for(int i=1; i<=b; i++)
    {
        ans= ans*a;
    }
    cout<<ans<<endl;

 int c,d;
 cin>>c>>d;
int answer =1;
 for(int i=1; i<=d; i++)
 {
  answer= answer*c;
 }
 cout<<answer<<endl;

  int e,f;                        
  cin>>e >>f;
   answer =1;
   for(int i=1; i<=f; i++)

   {
       answer= answer*e;
   }
cout<<"answer is "<<answer;

    return 0;
}