#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	float u, a, t, Xt;
	cout << "Input the speed (m/s) at which the vehicle started moving, and the acceleration (m/s^2) of the vehicle seperated by a space\n";
	cin >> u >> a;
	cout << "Now input the time the vehicle was moving for.\n";
	cin >> t;
	Xt = (u*t) + (0.5*a*t*t);
	cout << "Distance travelled = "<<Xt<<"m/s\n";
	system("PAUSE");
	return 0;
}
