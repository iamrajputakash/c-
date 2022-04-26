#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"May I Know Your Name ";
    // cin>>name;
    getline(cin,name);
    cout<<"Welcome\n"<<name<<endl;
    return 0;
}