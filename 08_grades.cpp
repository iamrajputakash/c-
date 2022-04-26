#include<iostream>
#include<cstdlib>
using namespace std;
typedef int marks;


int main()
{ 
    marks m1,m2,m3;
    float avg;
    int total;

    cout<<"Enter marks of subject.";
    cin>>m1>>m2>>m3;

    total = (m1+m2+m3);
    cout<<"total marks is"<<total<<endl;
    avg = (total/3);
    

    if(avg>=70)
    {
        cout<<"GradeA";
    }
    else if (avg>=35&&avg<=69)
    {
        cout<<"GradeB";
    }
    else
    {
        cout<<"GradeC";
    }
    
    return 0;

}