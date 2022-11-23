#include <iostream>
using namespace std;

int main() {
	float salm;
	int horat;
	float horat2, salb, imp, salareceb;
	cin >> salm >> horat;
	horat2 = salm * 5/100;
	salb = horat * horat2;
	imp = salb * 23/100;
	salareceb = salb - imp;
	cout << salareceb;

	
	return 0;
}
