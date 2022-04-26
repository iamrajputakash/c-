#include<iostream>
using namespace std;

int main()
{
    int days;
    cout<<"Enter days";
    cin>>days;
    switch (days)
    {
    case 1:
        cout<<"Mon";
        break;
         case 2:
        cout<<"tue";
        break;
         case 3:
        cout<<"wed";
        break;
         case 4:
        cout<<"thu";
        break;
         case 5:
        cout<<"fri";
        break;
         case 6:
        cout<<"sat";
        break;
         case 7:
        cout<<"sun";
        break;
    
    default:
    cout<<"Invalid days";
        break;
    }
    return 0;
}