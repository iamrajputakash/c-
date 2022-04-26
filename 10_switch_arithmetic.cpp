#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu\n";
    cout<<"1.Add\n"<<"2.sub\n"<<"3.mul\n"<<"4.div\n";

    int option;
    cout<<"Enter what you want\n";
    cin>>option;
    int a,b,c;
    cout<<"Enter two number\n";
    cin>>a>>b;

    switch (option)
    {
    case 1:c=a+b;
        
        break;
    case 2: c=a-b;
        break;

    case 3: c=a*b;
        break;
    case 4: c=a/b;
        break;
        
        
    }
cout<<c<<endl;
    return 0;
}