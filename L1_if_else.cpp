// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 24;
//     if (a>20)
//     {
//         cout<<"Love";
//     }
//     else if (a==24)
//     {
//         cout<<"Lovely";
//     }
//     else{
//         cout<<"babbar";
//     }
//     cout<<a;
// }

#include<iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"enter the character value"<<endl;
    cin>>ch;

    if (ch>=97&&ch<=122) 
    {   
     cout<<"This is lower case\n";
    }
    else if (ch>=65&&ch<=90)
    {
     cout<<"This is upper case\n";
    }
    else if(ch>=48&&ch <=57)
    {
     cout<<"this is numeric\n";
    }
    return 0;
}