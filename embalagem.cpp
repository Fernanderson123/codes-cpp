#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int ns, nsc=6;
	float sobra;
	cin >> ns;
	sobra = ns/float(nsc);
	cout << ceil(sobra);
	
	return 0;
}
