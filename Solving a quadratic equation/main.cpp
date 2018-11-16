#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float a,b,s;
    cout << "a^2 + b^2 - 2ab\n";
    cout << "Please input a value for a.\n";
    cin >> a;
    cout << a<<"^2 + b^2 - 2*"<<a<<"b\n";
    cout << "Now input a value for b.\n";
    cin >> b;
    s = (a*a) + (b*b) - (2*(a*b));
    cout << "Voilà, "<<a<<"^2 + "<<b<<"^2 - 2*"<<a<<"*"<<b<<" = "<<s<<"\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}
