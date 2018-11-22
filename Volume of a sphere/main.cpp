#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[]){
	float r,v;
	cout << "Input the radius of the sphere.\n";
	cin >> r;
	v = (4.0/3)*M_PI*r*r*r;
	cout << "The volume of the sphere is "<<v<<"\n";
	system("PAUSE");
	return 0;
}
