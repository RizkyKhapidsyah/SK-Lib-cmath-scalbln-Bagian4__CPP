#include <iostream>
#include <cmath>
#include <cfloat>
#include <conio.h>

using namespace std;

int main() {
	long int n = 857;
	double x = 9.564, hasil;
	hasil = scalbln(x, n);
	cout << x << " * " << FLT_RADIX << "^" << n << " = " << hasil << endl;
	_getch();
	return 0;
}