#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int a, b, c;
	cout << "Input 2 variables, a and b, seperated by a space.\n";
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << "The variables have been swapped\n";
	cout << "a is now "<<a<<" and b is now "<<b<<"\n";
	system("PAUSE");
	return 0;
}
