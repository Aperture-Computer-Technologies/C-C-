#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int r,area;
    cout << "What is the radius of the circle?\n";
    cin >> r;
    area = M_PI*(r*r);
    cout << "The area is "<<area<<"\n";
    system("PAUSE");
    return 0;
}
