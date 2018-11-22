#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	float eff, diesel, A, fuel, cost;
	eff = 20.00;
	diesel = 50.00;
	A = 90.00;
	fuel = A / eff;
	cost = diesel * fuel;
	cout << "The trip would cost Rs "<<cost<<".\n";
	system("PAUSE");
	return 0;
}
