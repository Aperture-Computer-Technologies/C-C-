#include <cstdlib>
#include <iostream>

using namespace std;

 main(int argc, char *argv[])
{
    long double a,b,sum;
    a = 0;
    b = 0;
    sum = 0;
    cout << "Input First Integer\n";
    cin >> a;
    cout << "Input Second Integer\n";
    cin >> b;
    sum = a + b;
    cout << "The sum is "<<sum<<"\n";
    system("PAUSE");
    return 0;
}
