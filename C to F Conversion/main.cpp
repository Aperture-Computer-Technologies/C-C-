#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float C,F;
    cout << "Input your temperature in Celsius.\n";
    cin >> C;
    F = (9.0/5)*C+32;
    cout << "Your Temperature in Farenheit is "<<F<<"\n";
    system("PAUSE");
    return 0;
}
