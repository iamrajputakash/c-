#include<iostream>
using namespace std;

int main()
{
    float total_bill;
    float discount ;

    cout<<"Enter total bill"<<endl;
    cin>>total_bill;

    if (total_bill> 500)
    {
        discount = total_bill*20/100;
    }
    else if (total_bill>=100&& total_bill<500)
    {
        discount= total_bill*10/100;
    }
    
    cout<<"Total bill is "<<total_bill<<endl;
    cout<<"Discount amount is "<<discount<<endl;
    cout<<"Remaining to pay "<<total_bill-discount<<endl;
    return 0;
}