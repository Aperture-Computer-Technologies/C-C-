#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){
	float r,h,v;
	cout << "Input the radius and height of the cylinder.\n";
	cin >> r >> h;
	v = (M_PI*r*r)*h;
	cout << "The volume of the cylinder is "<<v<<"\n";
	system("PAUSE");
	return 0;
}
