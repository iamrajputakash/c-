#include <iostream>
using namespace std;
int main()
{
    int n, sum;
    cout << "Enter n natural num.\n";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "your result is: \n"
         << sum << endl;

    return 0;
}