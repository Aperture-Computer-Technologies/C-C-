#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a, asqr, acube;
    cout << "Give me a number to eat, and I will spit out its square and cube\n";
    cin >> a;
    asqr = a * a;
    acube = asqr * a;
    cout << "The square of "<<a<<" is equal to "<<asqr<<"\n And the cubed of "<<a<<" is equal to "<<acube<<"\n";
    system("PAUSE");
    return 0;
}
