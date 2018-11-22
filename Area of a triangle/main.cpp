#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;

int main(int argc, char** argv) {
	float a, b, c, p, area;
	cout << "Input the 3 sides of the triangle seperated by spaces.\n";
	cin >> a >> b >> c;
	p = (a+b+c)/2;
	area = pow(p*(p-a)*(p-b)*(p-c),0.5);
	cout << "The area of your triangle = "<<area<<"\n";
	system("PAUSE");
	return 0;
}
