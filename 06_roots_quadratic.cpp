#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int r, a, b, c;
    cout << "Enter a,b,c";
    cin >> a >> b >> c;
    r = -b + (sqrt(b * b - 4 * a * c));
    cout << "result is " << r << endl;
    return 0;
}
