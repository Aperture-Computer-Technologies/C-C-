#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int length,width,area;
    cout << "Enter length of the rectangle\n";
    cin >> length;
    cout << "Enter width of the rectangle\n";
    cin >> width;
    area = length * width;
    cout << "The area of your rectangle is "<<area<<"\n";
    system("PAUSE");
    return 0;
}
