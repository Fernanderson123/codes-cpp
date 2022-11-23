#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float altcen,altm;
	float degraus;
	cin >> altcen;
	cin >> altm;
	degraus = altm*100 / altcen;
	cout << ceil(degraus);
	
	return 0;
}
