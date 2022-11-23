#include <iostream>
#include <cmath>
using namespace std;
int main (){
	float raio;
	float r1=3,r2=4;
	cin >> raio;
	
	cout << 2*M_PI*raio << endl;
	cout << pow(raio,2)*M_PI << endl;
	cout << r1/r2*M_PI*pow(raio,3);
	return 0;
}
