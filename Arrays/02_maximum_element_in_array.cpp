// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=6, max;
//     int A[6]={3,5,6,8,23,4};

   
//     max= A[0];
//     for (int i = 1; i < n; i++)
//     {
//        if (A[i]> max)
//        {
//            max= A[i];
//        }
     
//     }
    
//  cout<<"Maximum element is "<< max<<endl;



//     return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n=5;  int A[100];
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    cout<<"Maximum number is "<<max<<endl;
    
    return 0;
}