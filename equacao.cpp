#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float m, q;
	float x1, y1, x2, y2;
	cin >> x1; 
	cin >> y1;
	cin >> x2;
	cin >> y2;
	m=(y2-y1)/(x2-x1);
	q=y1-m*x1;
	cout << m << endl << q;
	return 0;
}
