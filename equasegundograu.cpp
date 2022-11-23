#include <iostream>
#include <cmath>
using namespace std;
int main (){
	float a, b, c, delta, x1,x2;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a==0){
		cout << "Esses valores n formam uma eq do segundo grau";
	}else ((delta=b*b)-(4*a*c));
	if (delta<0)
		cout << "Nao existe raiz real";
	if (delta==0){
		x1=(-b)/(2*a);
		cout << x1;
	} 
	if (delta>0){
		x1=(-b+sqrt(delta)/2*a);
		x2=(-b-sqrt(delta)/2*a);
		cout << x1 << " " << x2;
	}	

	
	return 0;
}
