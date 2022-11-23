#include <iostream>
using namespace std;
int main (){
	int x,y,z;
	cin >> x;
	cin >> y;
	cin >> z;
	if (x<y+z and y<x+z and z<x+y){
		if (x==y and y==z)
		cout << "triangulo equilatero";
		else if (x==y or x==z or y==x)
		cout << "triangulo isoceles";
		else if (x!=y and x!=z and y!=z)
		cout << "triangulo escaleno";
	}
		else cout << "nao forma um triangulo";
	
		

	return 0;
}
